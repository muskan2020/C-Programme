#include<stdio.h>
int x=30;
int main()
{
   auto  int x=90;
   {
       auto x=20;
       printf("%d\n",x);

   }
    printf("%d",x);
}
//printf("%d",x);
