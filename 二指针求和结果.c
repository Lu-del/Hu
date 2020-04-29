//运用双指针求和
#include <stdio.h>

int ptr(int *start, int *end);

int main()
{
    int number;
    int sum[10] = {20,31,51,12,61,21,14,13,71,39};

    number = ptr(sum,sum+10);
    printf("二指针求和结果：%d", number);

    return 0;

}
int ptr(int *start,int *end)
{
    int total = 0;
    
    while (start < end)
        total += *start++;

    return total;
}