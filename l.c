#include<stdio.h>
int main()
{
    int a[]={3,4,5,6};
    int *p;
    p=a;
    printf("%d %d %d %d %d",*p++,*p++,*p++,*p++,*p++);
}
