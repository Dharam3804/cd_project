# cd_project
calculator by using lex and yacc

setup in linux base system:
1.install flex and bison  to run code,run below command in terminal.
   apt-get install flex
   apt-get indtall bison 
2. open folder in terminal where our lex file and yacc file are present:
     cd cd_project.     (suppose we have a folder with name cd_project which contain file calc.l & calc.y)
3.run below command to run lex and yacc file:
   lex calc.l      //genetare lex.yy.c
   yacc -d calc.y     // generate both y.tab.h  & y.tab.c 
   cc lex.yy.c y.tab.c -ll -lm    //here we run both c file ,it generate a.out file
   ./a.out    // to get output.
   
      
    
   
