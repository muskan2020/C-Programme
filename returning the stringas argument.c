#include<stdio.h>
 char*display();
void main()
{
     char *str;
    str=display();

    printf("%s",str);
    str[0]='z';

    printf("%s",str);
}
char*display()
{
     char* str="muskan";
    return str;
}
