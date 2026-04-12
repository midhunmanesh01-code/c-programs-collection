#include <stdio.h>
int main() {
    int x=5,*ptr;
    ptr=&x;
    printf("Value of x is %d\n",*ptr);
    printf("Address of x is %p\n",&x);
    return 0;
}
