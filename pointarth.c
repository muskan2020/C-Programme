#include<stdio.h>
int main()
{
    int a[5]={0,1,-2,10,11};
    int *p=&a[1];
    printf("%d\n",*p);
    p=p*2;
    printf("%d\n",*p);
    printf("%d",p);
}
