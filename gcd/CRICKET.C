#include<stdio.h>
#include<string.h>

void search (char play []);

struct cricket
{
    char name[20];
    char country [20];
    float avg;
} c[3];

int main()
{
    int i;
    char ser [20];

    for ( i=0;i<3;i++)
    {
        printf("Enter name, country and battling average\n");
        scanf("%s%s%f", &c[i].name,&c[i].country,&c[i].avg);
    }
    printf("Enter the name of the player to search the details\n");
    scanf("%s", &ser);
    search(ser);
}

void search (char play[])
{
    int i, count = 0;
    for (i=0;i<3;i++)
    {
        if (strcmp(play, c[i].name)==0)
        {
            printf("Player %s from %s has an average of %0.2f", play,c[i].country,c[i].avg);
            count = 1;
            break;
        }
    }
    if (count==0)
    printf("Not Found");
}
