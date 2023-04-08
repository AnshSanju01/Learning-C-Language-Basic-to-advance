#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    

    printf("Value of _age is : %d", _age);
    printf("%d \n",age);
    printf("%d \n",*ptr);
    printf("%d \n", *(&age));
}