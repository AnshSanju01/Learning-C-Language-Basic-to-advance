#include<stdio.h>

void slice(char str[], int n, int m);

int main(){
    char str[] = "HelloWorld";
    slice(str , 3, 6);

    return 0;
}

void slice(char str[], int n, int m){
    char newstr[100];
    int j = 0;
    for(int i = n; i <= m; i++, j++){
        newstr[j] = str[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}