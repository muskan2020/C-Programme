#include<stdio.h>
int r()
{
    static int num=11;
    return num--;

}
void main()
{
    for(r();r();r());
    printf("%d",r());
    return 0;
}
