#include<stdio.h>
//#pragma pack(1)
  struct abc
  {
      char a;
      int b;
      char c;
      //double d;


  };
  void main()
  {
      struct abc s;
      printf("%d",sizeof(s));
  }
