#include <stdio.h>

int main(){
  char ch;
  printf("Enter char to find : ");
  scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("Uppercase");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("Lowercase");
    }
    else{
        printf("This is not a letter");
    }
   
    return 0;
}