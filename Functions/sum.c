#include <stdio.h>

int sum()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    return a+b;
}
int main()
{
    int result;
    result=sum();
    printf("Sum=%d",result);
    return 0;
}