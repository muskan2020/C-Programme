#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10];
    char s2[10];
    int flag=0,i;
    printf("enter");
    gets(s1);
    printf("enter sec");
    gets(s2);
    for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }

    }
    if(flag==0)
    {
        printf("same");

    }
    else
        printf("not");
}

    //val=strcmp(s1,s2);
    //if(val==0)
    //{
      //  printf("same");
    //}
    //else
      //  printf("not");

//    printf("%d",val);



