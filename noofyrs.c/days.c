#include <stdio.h>
int main()
{
    int D, Y, M, ND;
    printf("Enter the number of days :- \n");
    scanf("%d", &ND);
    Y = ND / 365;
    M = (ND - Y * 365) / 30;
    D = (ND - Y * 365 - M * 30);
    printf("Years = %d", Y);
    printf("\n months = %d", M);
    printf("\n Days = %d", D);
    return 0;
}