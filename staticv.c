#include<stdio.h>
void display();
void main()
{
    display();
    display();
}
void display()
{
    static int x=10;
     static int y=20;
    y++;
    x++;
    printf("%d\n",x);
    printf("%d\n",y);
}
