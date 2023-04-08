#include<stdio.h>

int fib(int n);

int main(){
    printf("fibonacchi is :%d",fib(6));
    return 0;
}

int fib(int n){
    if(n == 0){
        return 0;
    }
     
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }
    int fibN1 = fib(n - 1);
    int fibN2 = fib(n - 2);
    int fibN = fibN1 + fibN2;
    // printf("Fibonacci of number is : %d \n", fibN);
    return fibN;




}
