#include <stdio.h>


int main() {
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);

    int fact = 1;
    for(int i=1; i<=x; i++){
        fact = fact * i;
    }

    printf("Here the answer of factorial number : %d /n", fact);


    return 0;
}
