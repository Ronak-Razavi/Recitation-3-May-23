#include <stdio.h>


int main()
{
   int x=5;
   int *xptr=&x;
   *xptr=10;
   printf( "address of x  %d\n", &x);
   printf( "xptr stored in  %d \n", xptr);
   printf("xptr point to the value of %d\n",*xptr);


    return 0;
}

