//Printing Fibonacci series using recursion
#include<stdio.h>
int Fibonacci (int);
void main()
{
    int num, i;
    printf("Enter the number of terms:");
    scanf("%d", &num);
    for (i=0; i<num; i++)
    printf("%d", Fibonacci(i)); // 0, 1, 1, 2,...    
}
int Fibonacci (int n)
{
    if (n==0)
    return 0;
    else if (n==1)
    return 1;
    else 
    return Fibonacci (i-1)+Fibonacci(i-2);//
}