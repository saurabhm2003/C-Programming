#include<stdio.h>

void swap (int *x , int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;    
}
int main()
{
    int x = 10;
    int y = 11;
    printf("Values before swapping: x= %d, y = %d\n", x,y);
    swap(&x,&y);
    printf("Values after swapping: x = %d, y = %d", x,y);
}