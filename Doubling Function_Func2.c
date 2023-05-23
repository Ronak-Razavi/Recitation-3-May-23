#include <stdio.h>
#include <stdlib.h>
void func1 (int a);

int  func2 (int a);

int main()
{
    int a;
    printf("please enter an integer\n");
    scanf("%d", &a);
    printf("\n\n");

    printf("you have entered %d\n", a);
    func1(a);

    printf( "The func1 value is %d\n", a );

    a=func2(a);
    printf( "The func2 value is %d\n", a );


    return 0;
}

void func1 (int a)
{
    a*=2;
}

int  func2 (int a)
{
    a*=2;
    return a;
}