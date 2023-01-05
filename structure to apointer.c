#include<stdio.h>
struct std
{
    int a;
    float b;
    char c[10];
};
struct std s={10,7.8,"mmm"};
void main()
{
    struct std *ptr=&s;
    printf("%d%f%s",(*ptr).a,ptr->b,ptr->c);
}
