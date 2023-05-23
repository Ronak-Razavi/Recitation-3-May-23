# include <stdio.h>
void func1 (int a);

int main ()
{
    int a;
    printf("please enter an integer:\n");
    scanf("%d", &a);
    printf("You have entered : %d\n",a);
    func1(a);
    printf("After calling fun1, a is: %d\n",a);
    a=func2(a);
    printf("After calling fun2, a is: %d\n",a);
    func3(&a);
    printf("After calling fun3, a is: %d\n",a);

}
void func1 (int a)
{
    a*=2;
    printf("a in func1 is: %d\n",a);
}
int func2 (int a)
{
    a*=2;
    printf("a in func2 is: %d\n",a);
    return a;
}
void func3 (int *ap)
{
    *ap *=2;
    printf("a in func3 is: %d\n",*ap);
}
