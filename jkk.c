#include<stdio.h>
int main()
{
    int ft=0,st=1,nt,i,c;
    printf("enter the series");
    scanf("%d",&c);
   // printf("%d\n",c);
    for(i=1;i<c;i++)
    {
        if(i<=1)
        {
            nt=i;
        }
    else
    {
        nt=ft+st;
        ft=st;
        st=nt;
    }

        printf("%d\n",nt);
    }
        return 0;

}
