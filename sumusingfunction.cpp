#include<stdio.h>

int sum(int a, int b);

int main(){
    int a, b;
    printf("Enter first number : ");
    scanf("%d \n",&a);
    printf("Enter second number : ");
    scanf("%d \n",&b);

    int s = sum(a,b);
    printf("sum is : %d\n", s);


    return 0;

}

int sum(int a, int b){
    return a + b;
}