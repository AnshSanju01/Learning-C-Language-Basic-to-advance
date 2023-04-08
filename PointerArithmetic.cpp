#include<stdio.h>

int main(){
    //Case 1
    // int age = 22;
    // int *ptr = &age;
    // printf("ptr = %u \n",ptr);
    // ptr++;
    // printf("Int ptr = %u \n",ptr);
    // ptr--;
    // printf("Int ptr = %u \n",ptr);
// Case - 2
    // float price = 20.00;
    // float *ptr = &price;
    // printf("Float ptr = %u \n",ptr);
    // ptr++;
    // printf("Float ptr = %u \n",ptr);

// Case - 3
    char star = '*';
    char *ptr = &star;
    printf("char ptr = %u \n",ptr);
    ptr++;
    printf("char ptr = %u \n",ptr);

    return 0;
}
