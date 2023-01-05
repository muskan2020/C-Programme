#include<stdio.h>
union demo
{
    int a;
    char b;
    float c;
};
void main()
{
    union demo u;
    union demo *ptr=&u;
    u.a=9;
    u.b='m';
    u.c=8.0;
    printf("%d\n",ptr->a);
     printf("%c\n",ptr->b);
      printf("%f\n",ptr->c);

}
