#include <stdio.h>
int main() {
    int a=10,*ptr;
    ptr=&a;
    printf("Before swapping: a=%d, *ptr=%d\n",a,*ptr);
    *ptr=20;
    printf("After swapping: a=%d, *ptr=%d\n",a,*ptr);
    return 0;
}