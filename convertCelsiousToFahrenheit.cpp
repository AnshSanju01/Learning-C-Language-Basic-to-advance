#include<stdio.h>

float convertTemp(float celsious);

int main(){
    float far = convertTemp(37);
    printf("%f \n", far);
    return 0;
}


float convertTemp(float celsious){
    float far = celsious * (9.0/5.0) + 32;
    return far;
}