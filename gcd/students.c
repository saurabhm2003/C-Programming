#include<stdio.h>
struct Student 
{
    char name [50];
    int roll;
    float marks;
} s;

int main()
{
    printf("Enter Information: \n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Displaying information: \n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.lf\n", s.marks);
    return 0;
}


