#include<stdio.h>
//int a=50;
int main()
{
    int a=10;
     fun();
    {
        int a=20;
        printf("%d\n",a);
    }
    {
    printf("%d\n",a++);
    }
    printf("%d\n",a);
    return 0;
}
void fun()
{
    int a=30;
    printf("%d\n",a);
}
