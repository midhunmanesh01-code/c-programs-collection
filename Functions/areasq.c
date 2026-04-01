#include <stdio.h>

//Function to calculate the area of a square.
int area()
{
    float s;

    //Read the side of the square from user.
    printf("Enter the side of square: ");
    scanf("%f",&s);

    //Calculate and return the area of the square.
    return s*s;
}
int main()
{
    float result;

    //Call the area function and store the result in a variable.
    result=area();
    printf("Area of square=%.2f\n",result); //Used %.2f to print the result with 2 decimal places.
    return 0;
}