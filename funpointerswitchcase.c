#include<stdio.h>

void add(int a,int b)
{
    printf("%d",a+b);
}
void sub(int a,int b)
{
    printf("%d",a-b);
}
void mul(int a,int b)
{
    printf("%d",a*b);
}
void div(int a,int b)
{
    printf("%d",a/b);
}

void main()
{
    void (*ptr[10])(int,int)={add,sub,mul,div};
    int a,b,sh;
    printf("enter choice");
    scanf("%d",&sh);
    printf("enter");
    scanf("%d %d",&a,&b);
    (*ptr[sh])(a,b);

}
