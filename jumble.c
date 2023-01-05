#include<stdio.h>
int jumble(int x,int y)
{
    x=2*x+y;
    return x;
}
void main()
{
    int x=2,y=5;
    y=jumble(y,x);
    x=jumble(y,x);
    printf("%d\n",x);
    printf("%d",y);
    return 0;
}
