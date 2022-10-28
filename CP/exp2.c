#include<stdio.h>
int main()
{
    int NOD, Years, Months, Days;
    printf("Enter number of days:-");
    scanf("%d", &NOD); // Reading no of days from user
    Years = (NOD/365); // Calculating years.
    Months = (NOD - Years * 365)/30; //Calculating months
    Days = (NOD - Years * 365 - Months * 30); //Calculating days
    printf("Years = %d", Years); //Display results
    printf("\n Months = %d", Months);
    printf("\n Days = %d", Days);
    return 0;
}