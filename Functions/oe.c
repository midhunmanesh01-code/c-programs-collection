#include <stdio.h>

//Function to check if a number is even or odd.
void oe()
{ 
    int a;

    //Read a number from user.
    printf("Enter a number: ");
    scanf("%d",&a);

    //Check if the number is even or odd and print the result.
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
    //Call the oe function to check if the number is even or odd.
    oe();
    return 0;
}