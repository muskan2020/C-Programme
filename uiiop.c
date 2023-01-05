#include<stdio.h>
typedef unsigned char byte;
int main()
{
    unsigned int value =0x1223344;
    byte a,b,c,d;
    a=(value&0xff);
    b=((value>>8)&0xff);
    c=((value>>16)&0xff);
    d=((value>>24)&0xff);
    printf("a=%x\n",a);
    printf("b=%x\n",b);
    printf("c=%x\n",c);
    printf("d=%x\n",d);

}
