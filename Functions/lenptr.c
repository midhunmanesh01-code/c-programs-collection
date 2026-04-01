#include <stdio.h>
#include <string.h>

//Function to calculate the length of a string using pointer.
int lenptr()
{
    char str[20];
    int i=0;
    char *ptr;

    printf("Enter a string: ");
    scanf("%[^\n]",str); //Used (%[^\n]) to read a string with spaces.

    //Calculate the length of the string using pointer.
    ptr=str;
    while(*ptr!='\0')
    {
        i++;
        ptr++;
    }
    return i;
}
int main()
{
    int length;

    //Call the lenptr function and store the result in a variable.
    length=lenptr();
    printf("Length of the string is: %d\n",length); //Print the result.
    return 0;
}