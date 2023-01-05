#include<stdio.h>
struct std
{
    int a;
    float b;
    int c;

}std;

void main()
{
    struct std s={9,9.8,89};
    printf("%d%f%d",s.a,s.b,s.c);
}
