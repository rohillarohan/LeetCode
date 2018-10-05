// REVERSE INTEGER PROBLEM
#include<stdio.h>
#define FALSE 0
#define TRUE 1
#define NULL 0

int reverse_int(int x)
{
    int rev_int=0;
    int temp= x,pw;
    while(x)
    {
        temp = x%10;
        x = x/10;
        if (rev_int > 2147483647/10 || (rev_int == 2147483647 / 10 && temp > 7)) return 0;
        if (rev_int < -2147483648/10 || (rev_int == -2147483648 / 10 && temp < -8)) return 0;
        rev_int = rev_int*10 + temp;
    }
    return rev_int;
}

int main()
{
    int num,rev_num;
    num = 2568 ;
    printf("\nInteger = %d",num);
    if(!reverse_int(num)) (printf("\nERROR: INTEGER OVERFLOW"));
    else printf("\nReverse Integer = %d",reverse_int(num));
    return FALSE;
}
