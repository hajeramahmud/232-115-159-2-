#include <stdio.h>

int main()
{
    int N, i;
    long long factorial = 1;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial = %lld", factorial);

    return 0;
}