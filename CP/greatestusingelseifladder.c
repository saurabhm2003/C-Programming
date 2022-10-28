#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    if (x>y)
    {
        printf("x is greater than y\n");
    }
    else if(x<y)
    {
        printf("x is less than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
        printf("End of program");
        return 0;   
    }