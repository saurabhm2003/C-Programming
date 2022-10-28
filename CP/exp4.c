#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d%d, &a,&b");
    a = ++a;
    b = ++b;
    printf("a=%d, b =%d", a , b);
}