# include <stdio.h>

//Write a function program for two number to sum, prod,and ave

void doWork(int a, int b, int* sum, int* prod, int* avg);

// this is the main function
int main(){
    int a = 3, b = 5;
    int sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);
    printf ("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);
    
    return 0;
}
//call by value and call by reference
void doWork(int a, int b, int* sum, int* prod, int* avg)
{
    *sum = a+b;
    *prod = a*b;
    *avg = ((a+b)/2);
}