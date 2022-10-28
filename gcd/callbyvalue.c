#include<stdio.h>
void swap (int *x, int *y);
void swap (int *x, int *y)
{
    int temp;
    printf("Before swapping, the value of x is %d\n", *x);
    printf("Before swapping, the value of y is %d\n", *y);
    temp = *x;
    *x = *y;
    *y = temp;
    printf("After swapping, the value of x is %d\n", *x);
    printf("After swapping, the value of y is %d\n", *y);
}
int main()
{
    int a = 100;
    int b = 200;
    printf("Before swapping, the value of a is %d\n", a);
    printf("Before swapping, the value of b is %d\n", b);
    swap(&a,&b);
    printf("After swapping, the value of a is %d\n", a);
    printf("After swapping, the value of b is %d\n", b);
    return 0;
}

