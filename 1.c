#include <stdio.h>

void loop(unsigned long a);

int main()
{
    unsigned long number;

    printf("请输入一个整数：");
    while(scanf("%lu",&number) == 1)
    {
        loop(number);
        printf("\n请输入一个整数：");
    }

    return 0;
}

void loop(unsigned long a)
{
    int b;
    
    b = a % 2;
    if (a >= 2 )
    loop(a/2);
    putchar(b == 0 ? '0' : '1');
    
}
    