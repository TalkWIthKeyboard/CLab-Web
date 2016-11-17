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
// File  : shirt.cc
// Desc. : Test file for CLab
// Author: Rune M. Jensen
// Date  : 7/19/04
//////////////////////////////////////////////////////////////////////////

#include <string>
#include <iostream>
#include <clab.hpp>
#include <bdd.h>
using namespace std;

int main()  {

  freopen("output.txt","w",stdout);

  // parse and type check shirt.cp
  CPR shirt("shirt.cp");

  // compile rules using Randy's work list approach
  bdd solutionSpace = shirt.compileRules(cm_ascending);

  // compile a BDD of a user constraint
  //bdd  constraint = shirt.compile(Expr("size") == Expr("Small"));

  // restrict solution space

  //solutionSpace &= constraint;

  // compute valid assignments
  map< string, set<string> > va = shirt.validAssignments(solutionSpace);

  shirt.dump("outputDump.dump",solutionSpace);

  // write out result
  cout << "<var>: <valid assignments>\n";
  for ( map< string, set<string> >::iterator mit = va.begin(); mit != va.end(); ++mit)
    {
      cout << mit->first << ":";
      for (set<string>::iterator sit = mit->second.begin(); sit != mit->second.end(); ++sit)
	cout << " " << *sit;
      cout << endl;
    }

  return 0;
}


