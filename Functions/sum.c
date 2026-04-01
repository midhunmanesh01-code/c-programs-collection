#include <stdio.h>

//Function to calculate the sum of two numbers.
int sum()
{
    int a,b;

    //Read two numbers from user.
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    //Calculate and return the sum.
    return a+b;
}
int main()
{
    int result;

    //Call the sum function and store the result in a variable.
    result=sum();
    printf("Sum=%d\n",result); //Print the result.
    return 0;
}