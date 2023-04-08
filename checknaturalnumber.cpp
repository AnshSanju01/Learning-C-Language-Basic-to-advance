#include <stdio.h>


int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("The given number is not a natural number.\n");
    } else {
        printf("The given number is a natural number.\n");
    }
    
    return 0;
}
