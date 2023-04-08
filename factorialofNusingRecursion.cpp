#include<stdio.h>

int mul(int n);

int main(){
    printf("%d \n", mul(5));
    return 0;
}
// Recursion Function
int mul(int n){
    if(n == 1){
        return 1;
    }
    int mulNm1 = mul(n-1);
    int mulN = mulNm1 * n;
    return mulN;
    }