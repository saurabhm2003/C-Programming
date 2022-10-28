#include<stdio.h>
int main()
{
float BS, DA, TA, HRA, GS; 
printf ("Enter basic salary :-");
scanf("%f", & BS);
DA=BS*0.5;
TA=BS*0.3;
HRA=BS*0.2;
GS=DA+TA+HRA+BS;
printf("gross salary :-%f",GS);
return 0;
}