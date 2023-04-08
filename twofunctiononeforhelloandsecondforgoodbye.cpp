#include<stdio.h>
// declaration prototype
void printHello();
void printGoodbye();

int main(){
    printHello(); //function call
    printGoodbye();   
    return 0;
}

//function definition
void printHello(){
    printf("Hello : \n");
}

//function definition
void printGoodbye(){
    printf("Goodbye : \n");
}