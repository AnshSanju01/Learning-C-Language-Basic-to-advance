#include<stdio.h>

void square(int n);

int main(){
    int number = 4;
    square(number);
    // printf("Square of 4 is %d \n", number);
    return 0;
}

void square(int n){
    n = n * n;
    printf(" Square of entered number is : %d \n",n);


}