#include<stdio.h>
int main()
{
    int num,i;
    long int fact;
    printf("enter the number");
    scanf("%d",&num);
    fact=1;
    for(i=num;i>=1;i--)
        fact=fact*i;
        printf("factorial id %d %d",fact,num);

}
