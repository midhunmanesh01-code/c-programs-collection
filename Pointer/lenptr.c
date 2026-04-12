#include <stdio.h>
int main() {
    char str[20];
    int i=0;
    char *ptr=str;
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    while(*ptr!='\0') {
        i++;
        ptr++;
    }
    printf("Length of the string is %d\n",i);
    return 0;
}