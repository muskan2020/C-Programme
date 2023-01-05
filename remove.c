#include<stdio.h>
int main()
{
    int i,len=0,j;
    char str[]="remove space";
    printf("%d\n",strlen(str));
    len=sizeof(str)/sizeof(str[0]);
   // printf("%d",len);
    for(i=0;i<len;i++)
    {
        if(str[i]==' ')
        {
            for(j=i;j<len;j++)
            {
                str[j]=str[j+1];

            }
            len--;
        }
        }
        printf("%s",str);
}
