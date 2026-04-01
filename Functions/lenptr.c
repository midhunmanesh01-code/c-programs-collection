#include <stdio.h>
#include <string.h>
int lenptr()
{
    char str[20];
    int i=0;
    char *ptr;
    printf("Enter a string: ");
    scanf("%[^\n]",str);
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
    length=lenptr();
    printf("Length of the string is: %d\n",length);
    return 0;
}