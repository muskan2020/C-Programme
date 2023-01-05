#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("enter the a");
    scanf("%d",&a);
    printf("enter the value b");
    scanf("%d",&b);
    c=a+b;
    printf("%d",c);
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("positive number%d",n);
    }
    else
        printf("negative number");
    return 0;

}
