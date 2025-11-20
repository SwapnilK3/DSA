#include "./base.h"

int sumation(int n){
    int i = 1;
    int sum=0;
    while (i <= n){
        sum += i;
        i++;
    }
    return sum;
}
int main(){
    int sum;
    int n;
    co "Add Number for having Summation value:";
    cin n;
    sum = sumation(n);
    co sum;
    return 0;
}