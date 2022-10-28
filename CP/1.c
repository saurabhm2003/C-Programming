#include <stdio.h>
#include <conio.h>
void main()
{
    int nod, y, rd, m, rmd;
    printf("Enter no. of days");-
    scanf("%d", &nod);
    y = nod / 365;
    printf("y=%d", y);
    rd = nod % 365;
    m = rd / 30;
    printf("m=%d", m);
    rmd = rd % 30;
    printf("rmd=%d", rmd);
    getch();
}