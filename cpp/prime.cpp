#include "./alias.h"

bool is_prime_num(int n){
    bool is_prime = true;
    for(int i=2; i<=sqrt(n); i++){

        if (n%i==0){
            return false;
        }
    }
    return is_prime;
}

int main(){
    int n;
    co "Number to print Prime Number Until :";
    cin n;
    int i=2;
    if (i > n){
        co "Value must be more then 1";
    }
    while(i <= n){
        bool is_prime = is_prime_num(i);
        if (is_prime){
            co i << " ";
        }
        i++;
    }
    return 0;
}