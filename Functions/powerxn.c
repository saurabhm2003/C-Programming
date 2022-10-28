#include<stdio.h>
int power (int m, int n)
{
    if (n==0)
    return 1;
    else
    return m*power(m,n-1);
}
void main()
{
    int x,y,ans;
    printf("Enter the base:");
    scanf("%i", &x);
    printf("Enter the exponent:");
    scanf("%i", &y);
    ans=power(x,y);
    printf("%i raised to %i is %i",x,y,ans);
}