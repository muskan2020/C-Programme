#include<stdio.h>
void fact(int);
void main()
{
    int n,fact=1,i;
    printf("enter");
    scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
        fact=fact*i;
        }
        printf("%d",fact);
 }


