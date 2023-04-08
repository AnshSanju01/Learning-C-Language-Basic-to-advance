#include<stdio.h>

int calcPercentage(int science, int math, int sanskrit);

int main(){
    int sc = 90;
    int math = 90;
    int sans = 90;
    printf("Percentage is : %d \n", calcPercentage(sc,math, sans));
    return 0;
}

int calcPercentage(int science, int math, int sanskrit){
    return    ((science + math + sanskrit)/3) ;
}