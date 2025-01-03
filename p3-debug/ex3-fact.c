#include<stdio.h>
int n = 1;
void fact(int num)
{
    int i = 1;
    for(; i <= num; i++)
        n *= i;
}

int main()
{
    fact(5);
    printf("%d", n);
    return 0;
}

