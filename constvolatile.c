#include<stdio.h>
const volatile char *p=(const volatile char *)0x30;
int main(void)
{
    char in=0;
    in=*p;
    p=in;
    return 0;

}
