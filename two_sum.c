// TWO SUM PROBLEM
#include<stdio.h>
#define TRUE 1
#define FALSE 0

int *twoSum(int* nums, int numsSize, int target) {
    int *idx, flag = 0;
    idx = (int *)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        for(int j=numsSize-1;j>i;j--)
        {
            if(nums[i]+nums[j]==target)
            {
                idx[0] = i;
                idx[1] = j;
                flag = 1;
            }
            if(flag) break;
        }
        if(flag) break;
    }
    if(flag) return TRUE;
    else return FALSE;
}

int main()
{
    int num[] = {2,5,6,1}, *indx;
    if(twoSum(num,4,9)) for(int i=0;i<2;i++) printf("\nindx = %d",*(indx+i));
    else printf("\nNo Pair found");
    return FALSE;
}

