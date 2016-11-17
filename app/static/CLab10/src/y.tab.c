#ifndef lint
static char yysccsid[] = "@(#)yaccpar	1.8 (Berkeley) 01/20/90";
#endif
#define YYBYACC 1
#define TYPE 257
#define VARIABLE 258
#define RULE 259
#define BOOL 260
#define MOD 261
#define DIV 262
#define AND 263
#define OR 264
#define IMPL 265
#define EQ 266
#define NE 267
#define GTE 268
#define LTE 269
#define ID 270
#define NUMBER 271
#define UMINUS 272
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    0,    1,    1,    4,    4,    2,    2,    8,    9,
    9,    7,    7,    3,    3,   10,   11,   11,   11,   11,
   11,   11,   11,   11,   11,   11,   11,   11,   11,   11,
   11,   11,   11,   11,   11,    5,    6,    6,   12,
};
short yylen[] = {                                         2,
    6,    4,    0,    2,    8,    5,    0,    2,    3,    1,
    1,    1,    3,    0,    2,    2,    1,    1,    2,    2,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    1,    1,    2,    1,
};
short yydefred[] = {                                      0,
    0,    0,    0,   36,    0,    0,    0,   10,    0,   11,
    0,    0,    0,    4,    0,    0,    0,    8,    0,    0,
    0,   39,    0,    0,   37,    0,    0,    0,    0,    2,
   18,    0,    0,   17,    0,    9,    0,   38,    0,    0,
   19,   20,    0,   15,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   16,   13,
    1,    0,    6,   21,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   34,   33,   35,    0,    0,
    5,
};
short yydgoto[] = {                                       3,
    5,    9,   30,    6,   31,   24,   20,   11,   12,   32,
   33,   34,
};
short yysindex[] = {                                   -214,
 -266, -254,    0,    0, -241, -266,  -81,    0, -238,    0,
 -254, -266, -254,    0,  -44, -266,  -33,    0,  -11,   -5,
 -200,    0, -210,   23,    0,  -52,  -33,  -33,  -33,    0,
    0,  -33,  -34,    0, -266,    0,  -33,    0,   34,   20,
    0,    0,  -23,    0,  -33,  -33,  -33,  -33,  -33,  -33,
  -33,  -33,  -33,  -33,  -33,  -33,  -33,  -33,    0,    0,
    0,  -44,    0,    0,    4,   -7,  106,   15,   15,   87,
   87,   87,   87,   75,   75,    0,    0,    0,  -10,   27,
    0,
};
short yyrindex[] = {                                      0,
 -171, -169,    0,    0,    0, -171,    0,    0,    0,    0,
 -169,    0, -169,    0,    0,    0,   93,    0,  -57,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   93,    0,    0,    0,    0,   93,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   -9,  -36,   37,  -14,   74,   44,
   51,   59,   66,   22,   29,    0,    0,    0,    0,    0,
    0,
};
short yygindex[] = {                                      0,
   88,   18,   39,    0,  134,   36,   -1,    0,    0,    0,
  110,   33,
};
#define YYTABLESIZE 352
short yytable[] = {                                      28,
   23,   12,   57,    4,   23,    8,   29,   58,   54,   15,
   55,   27,   56,   57,   26,    4,   13,   64,   58,   54,
   17,   55,   23,   56,   59,   52,   30,   53,   18,   57,
   21,   24,   35,   60,   58,   54,   52,   55,   53,   56,
   57,   16,    1,    2,   30,   58,   54,   25,   55,   24,
   56,   57,   52,   36,   53,   38,   58,   54,   37,   55,
   22,   56,   32,   52,   32,   53,   32,   12,   39,   31,
   44,   31,   40,   31,   52,   61,   53,   22,   63,   62,
   32,   32,   80,   32,   26,   81,    3,   31,   31,    7,
   31,   25,   14,   14,   25,   22,   22,   79,   22,   27,
    0,    0,   26,   26,    0,   26,   28,    0,    0,   25,
   25,   57,   25,    0,   29,    0,   58,   27,   27,    0,
   27,   56,    0,   57,   28,   28,    0,   28,   58,   54,
    0,   55,   29,   56,    7,   10,   41,   42,   43,    7,
    0,    0,   57,    0,   10,   19,   10,   58,   54,   19,
   55,    0,   56,    0,   65,   66,   67,   68,   69,   70,
   71,   72,   73,   74,   75,   76,   77,   78,   19,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   22,   23,   45,   46,
   47,   48,   49,   50,   51,    0,    4,   22,    0,   45,
   46,   47,   48,   49,   50,   51,    0,    0,   30,   30,
    0,   30,   30,   24,   24,   45,    0,   47,   48,   49,
   50,   51,    0,    0,    0,    0,    0,    0,   47,   48,
   49,   50,   51,    0,    0,    0,    0,    0,    0,   47,
    0,    0,   50,   51,   32,   32,   32,   32,   32,   32,
   32,   31,   31,   31,   31,   31,   31,   31,    0,   22,
   22,   22,   22,   22,   22,   22,   26,   26,    0,   26,
   26,   26,   26,   25,   25,    0,   25,   25,   25,   25,
    0,   27,   27,    0,   27,   27,   27,   27,   28,   28,
    0,   28,   28,   28,   28,    0,   29,   29,    0,   29,
   29,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   47,
};
short yycheck[] = {                                      33,
   45,   59,   37,  270,   41,  260,   40,   42,   43,   91,
   45,   45,   47,   37,   16,  270,  258,   41,   42,   43,
  259,   45,   59,   47,   59,   60,   41,   62,   11,   37,
   13,   41,   44,   35,   42,   43,   60,   45,   62,   47,
   37,  123,  257,  258,   59,   42,   43,   15,   45,   59,
   47,   37,   60,   59,   62,   23,   42,   43,  259,   45,
  271,   47,   41,   60,   43,   62,   45,  125,   46,   41,
   32,   43,  125,   45,   60,   37,   62,   41,   59,   46,
   59,   60,   93,   62,   41,   59,  258,   59,   60,  259,
   62,   41,    0,    6,   62,   59,   60,   62,   62,   41,
   -1,   -1,   59,   60,   -1,   62,   41,   -1,   -1,   59,
   60,   37,   62,   -1,   41,   -1,   42,   59,   60,   -1,
   62,   47,   -1,   37,   59,   60,   -1,   62,   42,   43,
   -1,   45,   59,   47,    1,    2,   27,   28,   29,    6,
   -1,   -1,   37,   -1,   11,   12,   13,   42,   43,   16,
   45,   -1,   47,   -1,   45,   46,   47,   48,   49,   50,
   51,   52,   53,   54,   55,   56,   57,   58,   35,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  271,  264,  263,  264,
  265,  266,  267,  268,  269,   -1,  270,  271,   -1,  263,
  264,  265,  266,  267,  268,  269,   -1,   -1,  263,  264,
   -1,  266,  267,  263,  264,  263,   -1,  265,  266,  267,
  268,  269,   -1,   -1,   -1,   -1,   -1,   -1,  265,  266,
  267,  268,  269,   -1,   -1,   -1,   -1,   -1,   -1,  265,
   -1,   -1,  268,  269,  263,  264,  265,  266,  267,  268,
  269,  263,  264,  265,  266,  267,  268,  269,   -1,  263,
  264,  265,  266,  267,  268,  269,  263,  264,   -1,  266,
  267,  268,  269,  263,  264,   -1,  266,  267,  268,  269,
   -1,  263,  264,   -1,  266,  267,  268,  269,  263,  264,
   -1,  266,  267,  268,  269,   -1,  263,  264,   -1,  266,
  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  265,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 272
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,"'%'",0,0,"'('","')'","'*'","'+'","','","'-'","'.'","'/'",0,0,0,0,0,
0,0,0,0,0,0,"';'","'<'",0,"'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"TYPE","VARIABLE","RULE","BOOL","MOD","DIV",
"AND","OR","IMPL","EQ","NE","GTE","LTE","ID","NUMBER","UMINUS",
};
char *yyrule[] = {
"$accept : cp",
"cp : TYPE typedecls VARIABLE vardecls RULE ruledecls",
"cp : VARIABLE vardecls RULE ruledecls",
"typedecls :",
"typedecls : typedecl typedecls",
"typedecl : id '[' integer '.' '.' integer ']' ';'",
"typedecl : id '{' idlst '}' ';'",
"vardecls :",
"vardecls : vardecl vardecls",
"vardecl : vartype idlst ';'",
"vartype : BOOL",
"vartype : id",
"idlst : id",
"idlst : id ',' idlst",
"ruledecls :",
"ruledecls : ruledecl ruledecls",
"ruledecl : exp ';'",
"exp : number",
"exp : id",
"exp : '-' exp",
"exp : '!' exp",
"exp : '(' exp ')'",
"exp : exp IMPL exp",
"exp : exp OR exp",
"exp : exp AND exp",
"exp : exp LTE exp",
"exp : exp GTE exp",
"exp : exp '<' exp",
"exp : exp '>' exp",
"exp : exp NE exp",
"exp : exp EQ exp",
"exp : exp '-' exp",
"exp : exp '+' exp",
"exp : exp '%' exp",
"exp : exp '/' exp",
"exp : exp '*' exp",
"id : ID",
"integer : number",
"integer : '-' number",
"number : NUMBER",
};
#endif
#ifndef YYSTYPE
typedef int YYSTYPE;
#endif
#define yyclearin (yychar=(-1))
#define yyerrok (yyerrflag=0)
#ifdef YYSTACKSIZE
#ifndef YYMAXDEPTH
#define YYMAXDEPTH YYSTACKSIZE
#endif
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH 500
#endif
#endif
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
short *yyssp;
YYSTYPE *yyvsp;
YYSTYPE yyval;
YYSTYPE yylval;
short yyss[YYSTACKSIZE];
YYSTYPE yyvs[YYSTACKSIZE];
#define yystacksize YYSTACKSIZE
#line 194 "cp.y"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <list>
#include <string>
#include <vector>
#include "common.hpp"
#include "cp.hpp"
using namespace std;

// externs
extern char *yytext;        // defined in cp.l
extern int rmjlineno;       // defined in cp.l
extern int yyLastSemicolon; // defined in cp.l
extern int yyCurSemicolon;  // defined in cp.l

// globals
CP* cpp; 
void (*clabError) (int,string);
 
/* prototypes */

int yylex(void);

void yyerror(char *s) {
  clabError(1,string(s) + " line " + strOf(rmjlineno) + " at: " + string(yytext) + "\n");

}

#line 271 "y.tab.c"
#define YYABORT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse()
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register char *yys;
    extern char *getenv();

    if (yys = getenv("YYDEBUG"))
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if (yyn = yydefred[yystate]) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("yydebug: state %d, reading %d (%s)\n", yystate,
                    yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("yydebug: state %d, shifting to state %d (%s)\n",
                    yystate, yytable[yyn],yyrule[yyn]);
#endif
        if (yyssp >= yyss + yystacksize - 1)
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = (-1);
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;
#ifdef lint
    goto yynewerror;
#endif
yynewerror:
    yyerror("syntax error");
#ifdef lint
    goto yyerrlab;
#endif
yyerrlab:
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("yydebug: state %d, error recovery shifting\
 to state %d\n", *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yyss + yystacksize - 1)
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("yydebug: error recovery discarding state %d\n",
                            *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("yydebug: state %d, error recovery discards token %d (%s)\n",
                    yystate, yychar, yys);
        }
#endif
        yychar = (-1);
        goto yyloop;
    }
yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("yydebug: state %d, reducing by rule %d (%s)\n",
                yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 1:
#line 52 "cp.y"
{ 
		      list<TypeDecl>* typeDecls = (list<TypeDecl>*) yyvsp[-4];
		      list<VarDecl>* varDecls = (list<VarDecl>*) yyvsp[-2];
		      list<RuleDecl>* ruleDecls = (list<RuleDecl>*) yyvsp[0]; 
		      cpp = new CP(typeDecls,varDecls,ruleDecls);
		      delete typeDecls;
		      delete varDecls;
		      delete ruleDecls;
		    }
break;
case 2:
#line 62 "cp.y"
{ 
		      list<TypeDecl>* typeDecls = (list<TypeDecl>*) 0;
		      list<VarDecl>* varDecls = (list<VarDecl>*) yyvsp[-2];
		      list<RuleDecl>* ruleDecls = (list<RuleDecl>*) yyvsp[0]; 
		      cpp = new CP(typeDecls,varDecls,ruleDecls);
		      delete typeDecls;
		      delete varDecls;
		      delete ruleDecls;
		    }
break;
case 3:
#line 74 "cp.y"
{ yyval = (int) new list<TypeDecl>; }
break;
case 4:
#line 76 "cp.y"
{ TypeDecl* typeDecl = (TypeDecl*) yyvsp[-1];
		      list<TypeDecl>* types = (list<TypeDecl>*) yyvsp[0];
		      types->push_front(*typeDecl); 
		      delete typeDecl;
		      yyval = (int) types; }
break;
case 5:
#line 84 "cp.y"
{ TypeDecl* typeDecl = new TypeDecl(yyLastSemicolon+1,yyCurSemicolon,td_rng,(char*) yyvsp[-7],yyvsp[-5],yyvsp[-2],NULL);
		      yyval = (int) typeDecl; }
break;
case 6:
#line 87 "cp.y"
{ TypeDecl* typeDecl = new TypeDecl(yyLastSemicolon+1,yyCurSemicolon,td_enum,(char*) yyvsp[-4],0,0,(list<string>*) yyvsp[-2]);
		      yyval = (int) typeDecl; }
break;
case 7:
#line 92 "cp.y"
{ yyval = (int) new list<VarDecl>; }
break;
case 8:
#line 94 "cp.y"
{ VarDecl* varDecl     = (VarDecl*)       yyvsp[-1];
		      list<VarDecl>* vars = (list<VarDecl>*) yyvsp[0];
		      vars->push_front(*varDecl); 
		      delete varDecl;
		      yyval = (int) vars; }
break;
case 9:
#line 102 "cp.y"
{ yyval = (int) new VarDecl(yyLastSemicolon+1,yyCurSemicolon,(VarType*) yyvsp[-2],(list<string>*) yyvsp[-1]); }
break;
case 10:
#line 106 "cp.y"
{ yyval = (int) new VarType(vt_bool,""); }
break;
case 11:
#line 108 "cp.y"
{ yyval = (int) new VarType(vt_id,(char*) yyvsp[0]); }
break;
case 12:
#line 112 "cp.y"
{ list<string>* ids = new list<string>;
                      ids->push_front((char*) yyvsp[0]);
		      yyval = (int) ids; }
break;
case 13:
#line 116 "cp.y"
{ list<string>* ids = (list<string>*) yyvsp[0];
                      ids->push_front((char*) yyvsp[-2]);
		      yyval = (int) ids; }
break;
case 14:
#line 122 "cp.y"
{ list<RuleDecl>* rules = new list<RuleDecl>;
		      yyval = (int) rules; }
break;
case 15:
#line 125 "cp.y"
{ RuleDecl* rule = (RuleDecl*) yyvsp[-1]; 
		      list<RuleDecl>* rules = (list<RuleDecl>*) yyvsp[0];
		      rules->push_front(*rule);
		      delete rule;		      
                      yyval = (int) rules; }
break;
case 16:
#line 133 "cp.y"
{ yyval = (int) new RuleDecl(yyLastSemicolon+1,yyCurSemicolon,(CPexpr*) yyvsp[-1]); }
break;
case 17:
#line 137 "cp.y"
{ yyval = (int) new CPexpr(e_val,yyvsp[0],"",NULL,NULL); }
break;
case 18:
#line 139 "cp.y"
{ yyval = (int) new CPexpr(e_id,0,(char*) yyvsp[0],NULL,NULL); }
break;
case 19:
#line 141 "cp.y"
{ yyval = (int) new CPexpr(e_neg,0,"",(CPexpr*) yyvsp[0],NULL); }
break;
case 20:
#line 143 "cp.y"
{ yyval = (int) new CPexpr(e_not,0,"",(CPexpr*) yyvsp[0],NULL); }
break;
case 21:
#line 145 "cp.y"
{ yyval = (int) new CPexpr(e_paren,0,"",(CPexpr*) yyvsp[-1],NULL); }
break;
case 22:
#line 147 "cp.y"
{ yyval = (int) new CPexpr(e_impl,0,"",(CPexpr*) yyvsp[-2],(CPexpr*) yyvsp[0]); }
break;
case 23:
#line 149 "cp.y"
{ yyval = (int) new CPexpr(e_or,0,"",(CPexpr*) yyvsp[-2],(CPexpr*) yyvsp[0]); }
break;
case 24:
#line 151 "cp.y"
{ yyval = (int) new CPexpr(e_and,0,"",(CPexpr*) yyvsp[-2],(CPexpr*) yyvsp[0]); }
break;
case 25:
#line 153 "cp.y"
{ yyval = (int) new CPexpr(e_lte,0,"",(CPexpr*) yyvsp[-2],(CPexpr*) yyvsp[0]); }
break;
case 26:
#line 155 "cp.y"
{ yyval = (int) new CPexpr(e_gte,0,"",(CPexpr*) yyvsp[-2],(CPexpr*) yyvsp[0]); }
break;
case 27:
#line 157 "cp.y"
{ yyval = (int) new CPexpr(e_lt,0,"",(CPexpr*) yyvsp[-2],(CPexpr*) yyvsp[0]); }
break;
case 28:
#line 159 "cp.y"
{ yyval = (int) new CPexpr(e_gt,0,"",(CPexpr*) yyvsp[-2],(CPexpr*) yyvsp[0]); }
break;
case 29:
#line 161 "cp.y"
{ yyval = (int) new CPexpr(e_ne,0,"",(CPexpr*) yyvsp[-2],(CPexpr*) yyvsp[0]); }
break;
case 30:
#line 163 "cp.y"
{ yyval = (int) new CPexpr(e_eq,0,"",(CPexpr*) yyvsp[-2],(CPexpr*) yyvsp[0]); }
break;
case 31:
#line 165 "cp.y"
{ yyval = (int) new CPexpr(e_minus,0,"",(CPexpr*) yyvsp[-2],(CPexpr*) yyvsp[0]); }
break;
case 32:
#line 167 "cp.y"
{ yyval = (int) new CPexpr(e_plus,0,"",(CPexpr*) yyvsp[-2],(CPexpr*) yyvsp[0]); }
break;
case 33:
#line 169 "cp.y"
{ yyval = (int) new CPexpr(e_mod,0,"",(CPexpr*) yyvsp[-2],(CPexpr*) yyvsp[0]); }
break;
case 34:
#line 171 "cp.y"
{ yyval = (int) new CPexpr(e_div,0,"",(CPexpr*) yyvsp[-2],(CPexpr*) yyvsp[0]); }
break;
case 35:
#line 173 "cp.y"
{ yyval = (int) new CPexpr(e_times,0,"",(CPexpr*) yyvsp[-2],(CPexpr*) yyvsp[0]); }
break;
case 36:
#line 177 "cp.y"
{ char* s = new char[MAXNAMELENGTH];
                      strcpy(s,yytext);
                      yyval = (int) s; }
break;
case 37:
#line 184 "cp.y"
{ yyval = yyvsp[0]; }
break;
case 38:
#line 186 "cp.y"
{ yyval = -(yyvsp[0]); }
break;
case 39:
#line 190 "cp.y"
{ yyval = (int) atoi(yytext);  }
break;
#line 604 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("yydebug: after reduction, shifting from state 0 to\
 state %d\n", YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("yydebug: state %d, reading %d (%s)\n",
                        YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("yydebug: after reduction, shifting from state %d \
to state %d\n", *yyssp, yystate);
#endif
    if (yyssp >= yyss + yystacksize - 1)
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
