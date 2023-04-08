#include<stdio.h>

int main(){

    int i = 1;
    printf("%d \n",i++); //use then increase
    printf("%d \n",i);

    printf("%d \n",++i); //increase then use
    printf("%d \n",i);

    //++i = pre - increament
    //i++ = post - increament

    printf("%d \n",i--); //use then decreament
    printf("%d \n",i);

    printf("%d \n",--i); //decrement then use
    printf("%d \n",i);

    //++i = pre - decreament
    //i++ = post - decreament

    return 0;
}