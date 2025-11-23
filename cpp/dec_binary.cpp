#include "./alias.h"

void dec_to_binary(int num)
{
    int bin_num = 0;
    int pow = 1;
    while (num > 0)
    {
        int bit = num % 2;
        bin_num += bit*pow;
        pow = pow*10;
        num = num/2;
    }
    co bin_num;
}

int main()
{
    int num;
    co "Add Decimal Number:";
    cin num;
    dec_to_binary(num);
    return 0;
}
