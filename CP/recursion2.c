//WAP to find factorial of a number using recursion
#include<stdio.h>
int fact(int);
void main()
{
    int n, f;
    printf("Enter number for finding factorial: ");
    scanf("%d", &n);
    f = fact(n);
    printf("Factorial is %d", f);
}
int fact(int n)
{
    if (n==0)
    return 1;
    else 
    return (n*fact(n-1));    
}
