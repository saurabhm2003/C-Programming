#include<stdio.h>
void swap(int x, int y);
void swap (int x, int y)
{
    int temp;
    printf("Before swap, the value of x : %d\n", x);
    printf("Before swap, the value of y : %d\n", y);
    temp = x;
    x = y;
    y = temp;
    printf("After swap, the value of x : %d\n", x);
    printf("After swap, the value of y : %d\n", y);
}
int main()
{
    int a = 1000;
    int b = 2000;
    printf("Before swap, the value of a : %d\n", a);
    printf("Before swap, the value of b : %d\n", b);
    swap(a,b);
    printf("After swap, the value of a : %d\n", a);
    printf("After swap, the value of b : %d\n", b);
    return 0;
}