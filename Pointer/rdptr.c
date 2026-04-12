#include <stdio.h>
int main() {
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr; 
    printf("Enter elements:\n");
    for(i=0;i<n;i++) {
        scanf("%d", ptr + i); 
    }
    printf("Elements entered are: ");
    for(i=0;i<n;i++) {
        printf("%d ", *(ptr + i)); 
    }
    return 0;
}