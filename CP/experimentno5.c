#include <stdio.h>
int main()
{
    float marks;
    printf("Enter the final marks :-");
    scanf("%f", &marks);
    if (marks>=90)
    {
        printf("\n Grade S.");
    }
    else if (marks>=80)
    {
        printf("\n Grade A.");
    }
    else if (marks>=70)
    {
        printf("\n Grade B.");
    }
    else if (marks>=60)
    {
        printf("\n Grade C.");
    }
    else if (marks>=40)
    {
        printf("\n Grade PASS,");
    }
    else if (marks<40)
    {
        printf("\n Grade Fail.");
    }
    else
    {
        printf("\n Enter Valid Input.");
    }
    return 0;    
}