#include<stdio.h>
#include<string.h>
int main()
{
    int len1,len2,i;
    char s1[10]="Muskan";
    char s2[10]="sheikh";
    len1=strlen(s1);
    len2=strlen(s2);
    for(i=0;i<=len2;i++)
    {
       s1[len1+i]=s2[i];
    }
    printf("%s",s2);
    //strcat(s1,s2);
    //printf("%s ",s2);
  //  printf("%s %s",s1,s2);

}
