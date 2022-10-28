#include<stdio.h>

float sum(); // function declaration
int main()
{
    sum();  // function calling
}
float sum() // function definiton
{
    float a, b, sum=0;
    printf("enter two numbers:");
    scanf("%f%f", &a, &b);
    sum = a + b;
    printf("sum is %f\n", sum); 
}