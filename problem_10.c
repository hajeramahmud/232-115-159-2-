#include <stdio.h>

int main()
{
    int N, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &N);

    if(N <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for(i = 2; i < N; i++)
        {
            if(N % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime == 1)
    {
        printf("%d is a prime number.", N);
    }
    else
    {
        printf("%d is not a prime number.", N);
    }

    return 0;
}