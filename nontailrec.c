#include<stdio.h>
int print(int a)
{
    if(a<1)
        return;
    else
        return 1+print(a/2);
}
int main()
{
    int a;
    a=print(1);
    printf("%d",a);
}
