#include<stdio.h>

int main(){
    // 2 * 3
    int marks[2][3];
    marks[0][0] = 90;
    marks[0][1] = 95;
    marks[0][2] = 95;

    marks[1][0] = 93;
    marks[1][1] = 91;
    marks[1][2] = 99;

    printf("%d",marks[1][2]);

}