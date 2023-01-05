#include<stdio.h>
#include<string.h>
int  main()
{
    char s1[30];
    printf("enetr");
    gets(s1);
    int i;
    //strupr(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>=65||s1[i]<=90)
        {
            s1[i]=s1[i]+32;
        }
    }
    printf("%s",s1);

}
