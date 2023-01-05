#include<stdio.h>
//static int x=9;
int main()
{
    static int x;
    x+=10;
    x++;
    x--;
    printf("%d",x++);
}
    //printf("%d",x);
