#include<stdio.h>
void main(void)
{
    unsigned int value=0x1;
    char *r=(char*)&value;
    if(*r==1)
    {
        printf("little endian");
    }
    else
        printf("big endian");

}
