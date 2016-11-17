/*========================================================================
               Copyright (C) 2004 by Rune M. Jensen
                            All rights reserved

    Permission is hereby granted, without written agreement and without
    license or royalty fees, to use, reproduce, prepare derivative
    works, distribute, and display this software and its documentation
    for NONCOMMERCIAL RESEARCH AND EDUCATIONAL PURPOSES, provided 
    that (1) the above copyright notice and the following two paragraphs 
    appear in all copies of the source code and (2) redistributions, 
    including without limitation binaries, reproduce these notices in 
    the supporting documentation. 

    IN NO EVENT SHALL RUNE M. JENSEN, OR DISTRIBUTORS OF THIS SOFTWARE 
    BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, 
    OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE USE OF THIS SOFTWARE 
    AND ITS DOCUMENTATION, EVEN IF THE AUTHORS OR ANY OF THE ABOVE 
    PARTIES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

    RUNE M. JENSEN SPECIFICALLY DISCLAIM ANY WARRANTIES, INCLUDING,
    BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
    FITNESS FOR A PARTICULAR PURPOSE. THE SOFTWARE PROVIDED HEREUNDER IS
    ON AN "AS IS" BASIS, AND THE AUTHORS AND DISTRIBUTORS HAVE NO
    OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR
    MODIFICATIONS.
========================================================================*/

//////////////////////////////////////////////////////////////////////////
// File  : timer.cc  
// Desc. : functions for time measurments less than 10 hours
//         (see man setitimer for description).
//         Obs: these timers interfer with the gproff
//         profiling tool 
// Author: Rune M. Jensen, CS, CMU
// Date  : 7/19/04
//////////////////////////////////////////////////////////////////////////

#include <sys/time.h>
#include "common.hpp" 
#include "timer.hpp"
using namespace std;

void resettimers() {
  // resets the decrementing process timer
  // timer must be reset every 10 hours
  struct itimerval reset;
  reset.it_interval.tv_sec = 0;
  reset.it_interval.tv_usec = 0;
  reset.it_value.tv_sec = 10*60*60;
  reset.it_value.tv_usec = 0;
  setitimer(ITIMER_PROF, &reset,0);
}


// start a timer
void timer::start() {
    getitimer(ITIMER_PROF, &startt);
}

// stop timer and return result
double timer::stop() {

  struct itimerval stopp;
  double elapsedtime;

  getitimer(ITIMER_PROF, &stopp);
  elapsedtime = 
  ( 1e+6*(startt.it_value.tv_sec) + startt.it_value.tv_usec -
    1e+6*(stopp.it_value.tv_sec) - stopp.it_value.tv_usec ) / 1e+6;

  return elapsedtime;
}
