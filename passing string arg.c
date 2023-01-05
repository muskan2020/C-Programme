#include<stdio.h>
void display(char[]);
void main()
{
    char str[20];
    printf("enter the string");
    scanf("%s",str);
    display(str);
}
void display(char str[])
{
    printf("string is %s",str);
}
