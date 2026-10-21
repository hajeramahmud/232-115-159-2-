#include <stdio.h>

int main()
{
    int N, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    while(N != 0)
    {
        remainder = N % 10;
        reverse = reverse * 10 + remainder;
        N = N / 10;
    }

    printf("Reverse = %d", reverse);

    return 0;
}