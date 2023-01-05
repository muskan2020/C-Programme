#include<stdio.h>
int main()
{
    char ch[10];
    printf("enter the string");
    scanf("%c",&ch);
    if((ch=='a'||ch=='z')&&(ch=='0'||ch=='1'))
       {
                      printf("digit");
       }
       else
        printf("not");
    return 0;
}
