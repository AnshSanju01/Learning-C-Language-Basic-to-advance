#include<stdio.h>
#include<string.h>

int main(){
    //strcpm - comparision of two string 
    char firstStr[] = "Apple";
    char secStr[] = "Banana";
    int len = strcmp(secStr, firstStr);
    printf("%d", len);

    //strcat concatenation
    // char firstStr[100] = "Hello ";
    // char secontStr[] = "World";
    // strcat(firstStr, secontStr);
    // puts(firstStr);

    // count string using string library
    // char name[100];
    // fgets(name, 100, stdin);
    // printf("number of letter is : %lu \n ", strlen(name));


    // char name[] = "SANJU";
    // printf("%s", name);

    // char firstName[50];
    // scanf("Enter your name :%s",firstName);
    // printf("Your name is : %s",firstName);
// pointer String value can be change
    // char *canChange = "Hello World";
    // puts(canChange);
    // canChange = "Hello";
    // puts(canChange);

    // printf("\n");
// arrow string value cannot be changed 
    // char *cannotChange[] = "Good Boy";
    // puts(cannotChange);
    // canChange = "Good";
    // puts(cannotChange);

    return 0;

}