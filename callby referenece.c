#include<stdio.h>
 void fun(int*,int*);

void main()
{
    int x=5,y=7;
    fun(&x,&y);
    printf("x=%d y=%d",x,y);
}
 void fun(int* x,int* y)
{
    *x=5;
    *y=7;
    printf("a=%d b=%d",*x,*y);
}
