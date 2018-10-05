
#include<stdio.h>
#define FALSE 0
#define TRUE 1

int isPalindrome(int num)
{
    if(num<0) return FALSE;
    int rev_num = 0, temp_num = num,pop = 0;
    while(temp_num)
    {
        pop = temp_num%10;
        temp_num /= 10;
        rev_num = rev_num*10+pop;
    }
    if(rev_num-num==0) return TRUE;
    else return FALSE;
}

int main()
{
    int test_int = 123454321;
    if(isPalindrome(test_int)) return(printf("\nYes the integer is a Palindrome."));
    else return(printf("\nNo the integer is not a Palindrome."));
}

