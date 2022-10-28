#include <stdio.h>
int main()
{
    int i, j, k, a = 1, p = 3;

    for (i = 1; i <=3; i++)
{
    for (j = 1; j < 3; j++)
    {
        printf("");
    }
    for (k = 1; k <=2 * i - 1; k++)
    {
        printf("%d", a);
    }
    printf("\n");
    a +=2;
}
for (i = 2; i >= 1; i--)
{
    for (j = 3; j > i; j--)
    {
        printf("");
    }
    for (k = 1; k <= 2 * i - 1; k++)
    {
        printf("%d", p);
    }
    printf("\n");
    p -= 2;
}
    return 0;    
}