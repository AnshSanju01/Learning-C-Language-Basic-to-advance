#include<stdio.h>

void checkChar(char str[], char ch);

int main(){
    char str[] = "myrdpserver";
    char ch = 'e';
    checkChar(str, ch);
}

void checkChar(char str[], char ch){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i]==ch){
            printf("Charastics is present ");
            return;
        }
    }
    printf("Charastics is not present");
}