#include<stdio.h>
int gcd(int n, int m)
{
    while (n!=m)
    {
        if (n>m)
        n = n - m;
        else
        m = m - n;
    }
    return n;
}
int main()
{
    int n, m;
    printf("Enter the two numbers:");
    scanf("%d%d", &n, &m);
    printf("GCD of %d and %d is %d", n, m, gcd(n,m));
    return 0;
}