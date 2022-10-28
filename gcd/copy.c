#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    int len;
    char str1 [10], str2 [10];
    printf("Enter the word");
    scanf("%s", str1);
    len = strlen (str1);
    for (i=0; i<=len; i++)
    {
        str2[i] = str1[i];
    }
    printf("After copying the word is %s", str2);
}