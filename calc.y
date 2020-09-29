%{
       #include<stdio.h>
       #include<stdlib.h>
       #include<math.h>
      int yylex();
      void yyerror(char *s);

       
%}

%union			
{ double p;}
%token<p>num
%token L_BRACKET R_BRACKET
%token DIV MUL ADD SUB
%token PI
%token POW SQRT 
%token LOG
%token ABS
%token SIN COS TAN

/*Defining the Precedence and Associativity*/

%left SUB
%left ADD		
%left MUL
%left DIV
%left POW SQRT
%left L_BRACKET R_BRACKET			
%nonassoc uminu			
%type<p>exp
%type<p>constant			
%%

/* for storing the answer */
ss: exp {printf("Result =%g\n",$1);}

/* for binary arithmatic operators */
exp :   exp ADD exp      { $$=$1+$3; }
       |exp SUB exp      { $$=$1-$3; }
       |exp MUL exp      { $$=$1*$3; }
       |exp DIV exp      {
                               if($3==0)
                                 { yyerror("\ncan not divide by zero\n");}
                              else 
                                 $$=$1/$3;
                         }
      
       |exp POW exp {$$=pow($1,$3);}
       |SUB exp         {$$=-$2;}
       |SIN L_BRACKET exp R_BRACKET   {$$=sin($3);}
       |COS L_BRACKET exp R_BRACKET   {$$=cos($3);}
       |TAN L_BRACKET exp R_BRACKET   {$$=tan($3);}
       |LOG L_BRACKET exp R_BRACKET   {$$=log($3);}
       |SQRT L_BRACKET exp R_BRACKET  {$$=sqrt($3);}
       |num
 	|L_BRACKET exp R_BRACKET {$$=$2;}
        |constant
;
constant:PI {$$=3.142;}
;
 	
%%

/* extern FILE *yyin; */
void main()
{  printf("\n            WELCOME TO CALCULATOR!          \n"); 
 do{  
    printf("\nenter a expression : \n ");
       		yyparse();
   
 }while(1);
}
void yyerror(char *s)			
{
       printf("\n%s",s);
}

