#include<stdio.h>
void modify(char*,char*);
void main()
{
    char str[]="Muskan";
    char str1[]="Mizba";
    modify(str,str1);
}
void modify(char* str,char*str1)
{
    int i,length=0;
    for(i=0;str[i];i++)
        length=length+1;
    printf("%d\n",length);
    str1[0]='i';
    printf("%s\n %s",str,str1);

}
