#include<stdio.h>
void fun();
void fun1();
int main()
{
    extern int a;
    printf("%d\n",a);
    fun();
    fun1();

}
void fun()
{
    int a=2;
    a++;
    printf("a=%d\n",a);
}
void fun1()
{
    printf("hello from fun");
}
int a=10;
