#include <stdio.h>
int oe()
{ 
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        return 1;
    }
    else
    {
        return 2;
    }
    return 0;
}
int main()
{
    int result;
    result=oe();
    if(result==1)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
    return 0;
}