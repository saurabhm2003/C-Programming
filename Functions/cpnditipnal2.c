#include<stdio.h>
void main()
{
    int a, b, c, large;
    printf("Enter any three numbers:");
    scanf("%d%d%d", &a,&b,&c);
    large = (a>b)? (a>c?a:c) : (b>c?b:c);
    printf("Largest number is %d", large);
}