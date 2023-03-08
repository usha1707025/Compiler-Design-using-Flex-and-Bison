%{
   #include <stdio.h>
   #include <stdlib.h>
   #include <math.h>
   extern FILE *yyin;
   int yylex(void);
   void yyerror(char *);
   int sym[26],store[26];
%}

%token VOIDMAIN START END VARIABLE NUMBER INT FLOAT DOUBLE CHAR COMMA SC ASSIGN SUM MINUS MUL DIV SCAN LB RB OUT PRIME EVEN_ODD FACT SQRT POWER IF ELIF ELSE DO DONE NEQU EQU GRE GR WHILE LE LT SUMM FOR IR TO FIBO SQRE CUBE SWITCH COLON CASE DEF SUMMATION DIVISORS
%nonassoc IF
%nonassoc ELSE
%left GR GRE EQU NEQU
%left SUM MINUS
%left MUL DIV
%left POWER CUBE SQRE SQRT


%%

program: VOIDMAIN START cstatement END { printf("\nSuccessful compilation\n");}
	;
	
cstatement:
	| cstatement statement
	| cstatement function
	| cstatement if_else
	| cstatement switch
	| cstatement loop
	| cstatement cdeclaration
	;
cdeclaration: type ID SC {printf("\nValid declaration of the variables.\n");}
	;
type: INT
	|FLOAT
	|DOUBLE
	|CHAR
	;
ID: ID COMMA VARIABLE {
							if(store[$3]==1)
							{
								printf("%c is already declared\n",$3+97);
							}
							else
							{
								store[$3]=1;
							}
						}
	| VARIABLE  {
							if(store[$1]==1)
							{
								printf("%c is already declared\n",$1+97);
							}
							else
							{
								store[$1]=1;
							}
						}
	;
	
statement: SC
	| SCAN LB VARIABLE RB SC{
									if(store[$3]==1){
										float a;
										printf("\nUser input for %c:\n",$3+97);
										scanf("%f",&a);
										sym[$3]=a;
										}
									else{
										printf("%c is not declared\n",$3+97);
										}
									}

	| VARIABLE ASSIGN expression SC {
									if(store[$1]==1){
									   sym[$1]=$3;
									   printf("\nValue of the variable, %c: %d\t\n",$1+97,$3);}
									else{
										printf("%c is not declared\n",$1+97);  
										}
								}
	| OUT LB expression RB SC { 
								printf("\nValue of the expression = %d\n",$3);
								}

    ;
	
function: expression
	| PRIME LB expression RB SC	{
										int i,flag=0;
										printf("\nFunction for Prime number\n");
										if($3>1){
										for(i=2;i<=$3/2;i++){
											if($3%i==0){
											printf("%d is not a prime number\n",$3);
											flag=1;
											break;
											}
										}
										if(flag==0){
											printf("%d is a prime number\n",$3);
											}
										}
										else{
										  printf("%d is not a prime number\n",$3);
										  }
								   }
	| EVEN_ODD LB expression RB SC{
									printf("\nFunction for odd_even\n");
									if($3%2==0){
									   printf("%d is an even number\n",$3);
									   }
									else{
									   printf("%d is an odd number\n",$3);
						               }
									}
	| FACT LB expression RB SC {
									unsigned long long fact=1;
									int i;
									printf("\nFunction for Factorial\n");
                                    if($3< 0)
                                        printf("\nError! Factorial of a negative number doesn't exist.\n");
                                    else{
                                      for(i=1;i<=$3;i++) {
                                            fact *= i;
                                           }
                                     printf("Factorial of %d = %llu\n",$3,fact);
                                    }
								}	
	| FIBO LB expression RB SC {
									int n=$3,i;
									printf("\nFunction for Fibonacci_series\n");
									int arr[n+2];
									arr[0]=0;
									arr[1]=1;
									for(i=2;i<=n;i++){
										arr[i]=arr[i-1]+arr[i-2];
									}
									printf("First %d fibonacci numbers :",n);
									for(i=0;i<n;i++){ printf(" %d",arr[i]);}
									printf("\n");
									}
	| SUMMATION LB expression RB SC {
									int i,sum=0;
									printf("\nFunction for Summation\n");
									for(i=1;i<=$3;i++){
									   sum+=i;
									   }
									   printf("Sum of 1 to %d : %d\n",$3,sum);
									}
	| DIVISORS LB expression RB SC {
									int i;
									printf("\nFunction for Divisors\n");
									printf("All divisors of %d :",$3);
									for(i=1;i<=$3;i++){
									  if($3%i==0){
										printf(" %d",i);}
										}
									printf("\n");
									}
    ;
	
if_else: IF expression DO expression SC DONE ELIF expression DO expression SC DONE ELSE DO expression SC DONE
									{		
									float a=$4,b=$10,c=$15;
                       					if($2){ printf("\nValue of the expression in whether block = %.2lf\n",a);}
										else if($8){ printf("\nValue of the expression in ewhether block = %.2lf\n",b);}

										else{ printf("\nValue of the expression in otherwise block = %.2lf\n",c);}
									}
		| IF expression DO IF expression DO expression SC DONE ELSE DO expression SC DONE DONE ELSE DO expression SC DONE
									{
									float a=$7,b=$12,c=$18;
										if($2){
											if($5){ printf("\nValue of the expression in valid condition = %.2lf\n",a);}
										    else{ printf("\nValue of the expression in invalid condition = %.2lf\n",b);}
											}
										else{ printf("\nValue of the expression in invalid condition = %.2lf\n",c);}
									}
		;
		
switch: SWITCH LB expression RB DO CASE expression COLON expression SC CASE expression COLON expression SC DEF COLON expression SC DONE
								{
									printf("\nSwitch statement is found\n");
									while($3)
									{
										if($3==$7){
											printf("Choice is 1: %d\n",$9);
											break;}
										if($3==$12){
											printf("Choice is 2: %d\n",$14);
											break;}
										else{
											printf("Choice other than 1, 2: %d\n",$18);
											break;}
									}
								}
	;
										

loop:  WHILE expression LE NUMBER DO expression SC DONE
								{
								printf("\nA while loop is found.\n");
								printf("\nTable of 10:\n\n");	
									while($2<=$4){
									  printf("10 * %d = %d\n",$2,$6);
									  $2=$2+1;
									  $6=10*$2;
									}
								printf("\nThe loop works properly.\n");
								}
	
	| FOR expression IR expression TO expression DO expression SC DONE
								{					
								printf("\nA for loop is found.\n");
								for($2=$4;$2<=$6;$2++){
									printf("\niteration %d : %d\n",$2,$8);
								
								}
								printf("\nThe loop works properly.\n");
								}
	| DO expression SC DONE WHILE expression LE NUMBER
								{
								printf("\nA Do...while loop is found.\n");
								printf("\nTable of 10:\n\n");
									do
									{
									  printf("10 * %d = %d\n",$6,$6);
									  $6=$6+1;
									  $2=10*$6;
									}
									while($6<=$8);
								printf("\nThe loop works properly.\n");
								}

	;										
																
																

expression: NUMBER
	| VARIABLE		{ $$=sym[$1];}
	| SQRT LB expression RB{
								float num=$3;
								if(num>=0){
									$$=(float)sqrt(num);
								}
								else{
								   printf("\nInput must be non negative\n");
								}
								}
	| POWER LB expression COMMA expression RB{
								$$=pow($3,$5);
								}
	| SQRE LB expression RB{
							$$=(float)$3*$3;
							  }
	| CUBE LB expression RB{
	                          $$=(float)$3*$3*$3;
							  }
	| expression SUM expression { $$=$1+$3;}
	| expression MINUS expression { $$=$1-$3;}													
	| expression MUL expression { $$=$1*$3;}													
	| expression DIV expression { 
									if($3){
									   $$=$1/$3;
									}
									else{
									   $$=0;
									   printf("\nDivision by zero\t");
									}
								}
	| expression LE expression	{$$= $1<=$3;}
	| expression LT expression	{$$= $1<$3;}

	| expression GR expression { $$= $1>$3;}
	| expression GRE expression { $$= $1>=$3;}
	| expression NEQU expression { $$= $1!=$3;}
	| expression EQU expression { $$= $3;}
	| VARIABLE SUMM 			{ $$= sym[$1]+1;}
	
    ;

%%

void yyerror(char *s)
{
	fprintf(stderr, "%s\n", s);
}

int yywrap()
{
   return 1;
   }
int main()
{
   yyin=fopen("input.txt","r");
   yyparse();
}