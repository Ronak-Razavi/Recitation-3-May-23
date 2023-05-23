#include <stdio.h>
int total;
int squre (int x)
{
    x=x*x;
    return x;
}

int  squreOfSum(int x, int y)
{
    int z;
    z= squre(x+y);
    return z;

}


int main()
{
  int a,b;
  a=8;
  b=5;
  total=squreOfSum(a,b);
  printf("Squre of Sum a and b is:%d \n",total);


    return 0;
}
