#include <stdio.h>
struct patient
{
    char name[20];
    int age;
    char dateofadmit[10];
    char bloodgroup[4];
    char gender[6];
} p[3];
int main()
{
    printf("\n------ENTER THE PATIENT MEDICAL DATA-----\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter the Patient Name:");
        scanf("%s", &p[i].name);
        printf("\nEnter the age:");
        scanf("%d", &p[i].age);
        printf("\nEnter the Date of Admit:");
        scanf("%s", &p[i].dateofadmit);
        printf("\nEnter the Blood Group:");
        scanf("%s", &p[i].bloodgroup);
        printf("\nEnter the Gender:");
        scanf("%s", &p[i].gender);
    }
    printf("\n----Patient Medical Record----\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        printf("%s\n %d\n %s\n %s\n %s", p[i].name, p[i].age, p[i].dateofadmit, p[i].bloodgroup, p[i].gender);
        printf("\n");
    }
    return 0;
}