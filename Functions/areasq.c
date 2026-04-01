#include <stdio.h>
int area()
{
    float s;
    printf("Enter the side of square: ");
    scanf("%f",&s);
    return s*s;
}
int main()
{
    float result;
    result=area();
    printf("Area of square=%f\n",result);
    return 0;
}