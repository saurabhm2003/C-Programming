#include<stdio.h>

void sum()
{
    int a, b ,sum;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b );
    sum = a + b;
    printf("sum = %d\n", sum);
}

void sub()
{
    int a, b, sub;
    printf("\nEnter the two numbers: ");
    scanf("%d %d", &a, &b);
    sub = a - b;
    printf("sub is %d", sub);

}

void multiplication ()
{
    int a, b, multiplication;
    printf("\nEnter the two numbers:");
    scanf("%d %d", &a, &b);
    multiplication = a * b;
    printf("multiplication is %d", multiplication);

}

void division()
{
    int a,b, division;
    printf("\nEnter the two numbers: ");
    scanf("%d %d", &a, &b);
    division = a / b;
    printf("division is %d", division);

}

void main()
{
sum();
sub();
multiplication();
division();
}

