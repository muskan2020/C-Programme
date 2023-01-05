#include<stdio.h>
//#pragma pack(1)
struct std
{
    int a;
    float b;
    char c[20];
}s,s2;
void main()
{
struct std s={.a=1,.b=90.5,.c="muskan"};//designated initialization
struct std s2={6,89.8,"mmm"};
printf("%d %f %s",s.a,s.b,s.c);
printf("%d %f %s",s2.a,s2.b,s2.c);
//printf("")

}
