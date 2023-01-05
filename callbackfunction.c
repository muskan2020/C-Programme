#include<stdio.h>
void sum(int a,int b)
{
    printf("%d",a+b);
}
void sub(int a,int b)
{
    printf("%d",a-b);
}
void display(void(*ptr)(int ,int ))
{
    (*ptr)(4,5);
}
void main()
{
    int a,b;
    //printf("enter");
    //scanf("%d %d",&a,&b);
    display(sum);
    display(sub);
}
