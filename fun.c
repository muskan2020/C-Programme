#include<stdio.h>
void sum();
void sub();
void mul();
void div();
 void main()
{
    sum();
    sub();
    mul();
    div();

}
void sum(void)
{
    int a=9,b=8,sum=0;
    sum=a+b;

    printf("%d\n",sum);
}
void sub()
{
    int a=5,b=9,sub;
    sub=a-b;
    printf("%d\n",sub);

}
void mul()
{
    int a=5,b=7,mul;
    mul=a*b;
    printf("%d\n",mul);

}
void div()
{
    int a=2,b=10,div;
    div=a/b;
    printf("%d\n",div);

}
