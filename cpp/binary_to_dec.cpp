#include "./alias.h"

void binary_to_dec(int num)
{
    int dec_num = 0;
    int pow = 1;
    while (num > 0)
    {
        int last_dig = num % 10;
        dec_num += last_dig*pow;
        pow = pow * 2;
        num=num/10;
    }
    co dec_num;
}

int main()
{
    int num;
    co "Add Binary Number:";
    cin num;
    binary_to_dec(num);
    return 0;
}
