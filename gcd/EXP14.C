#include<stdio.h>
#include<string.h>
struct Patient
{
    char pname[20];
    char bgroup[10];
    char gender [10];
    int age;
}p1;
int main()
{
    printf("Enter the patient details\nName, gender, blood group and age");
    scanf("%s%s%s%d", &p1.pname,&p1.gender,&p1.bgroup,&p1.age);
    printf("Patient Details:");
    printf("\nName of the patient is %s\n Gender of the patient is %s\n Blood Group of the patient is %s\n Age of the patient is %d",p1.pname, p1.gender, p1.bgroup, p1.age);
    return 0;
}