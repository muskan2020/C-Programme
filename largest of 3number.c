#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the number");
    scanf("%d",&b);
    printf("enter the number");
    scanf("%d",&c);
    if(a>b&&a>c)
    {
        printf("%d",a);
    }
    else if(b>c&&b>a)
    {
        printf("%d",b);
    }
    else if(c>a&&c>b)
    {
        printf("%d",c);
    }
    else
        printf("invalid number");
}
