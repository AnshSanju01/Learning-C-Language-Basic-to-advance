#include<stdio.h>

void printString(char arr[]);

int main(){
    char firstname = "Sanjeev";
    char lastname = "Rao";

    printString(firstname);
    printString(lastname);
    
    return 0;
}


void printString(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c \n", arr[i]);
    }
    printf("\n");
}