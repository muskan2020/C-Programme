#include<stdio.h>
int main()
{
    char str[20];
    int i,j=0;
   // printf("remove white space");
    gets(str);
   //  printf("string =%s\n",str);
    for(i=0;str[i];i++)
    {
        str[i]=str[i+j];
        if(str[i]==' '||str[i]=='\t')
        {
            j++;
            i--;
        }
    }
    printf("%s\n",str);
}
