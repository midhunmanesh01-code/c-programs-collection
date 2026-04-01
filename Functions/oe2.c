#include <stdio.h>

//Function to check if a number is even or odd.
int oe()
{ 
    int a;

    //Read a number from user.
    printf("Enter a number:");
    scanf("%d",&a);
    
    //Check if the number is even or odd and return 1 for even and 2 for odd.
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

    //Call the oe function and store the result in a variable.
    result=oe();

    //Check the result and print whether the number is even or odd.
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