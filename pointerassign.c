#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *p;
    int *q;
    p=&a;
    q=&b;
    //*q=*p;
    printf("a=%d %d %d %d %d %d %d %d",a,*p,*q,&a,&b,p,q,b);

}
