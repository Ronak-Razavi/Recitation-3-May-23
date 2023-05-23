#include <stdio.h>
#include <stdlib.h>
void func1 (int a);

int main()
{
    int a;
    printf("please enter an integer\n");
    scanf("%d", &a);
    printf("\n\n");

    printf("you have entered %d\n", a);
    func1(a);

    printf( "The final value is %d", a );

    return 0;
}

void func1 (int a)
{
    a*=2;
}