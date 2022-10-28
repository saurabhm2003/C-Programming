#include<stdio.h>
int main()
{
int a, b, rem;
printf("\n Enter The First Numbers :- "); 
scanf("%d",&a);
printf("\n Enter The Second Numbers :- ");
scanf("%d", &b);
while (b!=0)
{
rem=a%b;
a=b;
b=rem;
}
printf("\n GCD of two Numbers is :- %d\n", a);
return(0);
}