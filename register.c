#include<stdio.h>
int main()
{
    register int i,sum=0;
    for(i=9;i<10;i++)
        sum=sum+i;
    printf("%d",sum);
}
