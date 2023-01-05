#include<stdio.h>
 void fun(int,int);

void main()
{
    int x=5,y=7;
    fun(x,y);
    printf("x=%d y=%d",x,y);
}
 void fun(int a,int b)
{
    a=5,b=7;
    printf("a=%d b=%d",a,b);
}
