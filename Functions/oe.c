#include <stdio.h>
void oe()
{ 
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is even",a);
    }
    else
    {
        printf("%d is odd",a);
    }
}
int main()
{
    oe();
    return 0;
}