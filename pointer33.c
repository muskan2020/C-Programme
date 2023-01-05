#include<stdio.h>
int main()
{
    int a=10,b=9,c;
    int *p;
    p=&a;
    p=&b;
    p=&c;
    c=*p;
    printf("%d\n",&a);
      printf("%d\n",&b);
        printf("%d\n",*p);
          printf("%d",c);

}
