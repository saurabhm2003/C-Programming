#include <stdio.h>
struct student
{
    char name[20];
    char dateofsubmission[10];
    char std[20];
    int roll;
    float marks;
} s[4];
int main()
{
    printf("\n----- ENTER THE STUDENT DATA----\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the student name:");
        scanf("%s", &s[i].name);
        printf("Enter Date of Submission:");
        scanf("%s", &s[i].dateofsubmission);
        printf("Enter the Standard:");
        scanf("%s", &s[i].std);
        printf("Enter the Roll No:");
        scanf("%d", &s[i].roll);
        printf("Enter the CP Marks:");
        scanf("%f", &s[i].marks);
    }
    printf("\n----STUDENT RECORD----\n");
    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        printf("%s\n %s\n %s\n %d\n %f\n", s[i].name, s[i].dateofsubmission, s[i].std, s[i].roll, s[i].marks);
        printf("\n");
    }
    return 0;
}