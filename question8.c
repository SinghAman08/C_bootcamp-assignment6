// 8. Write a program to check whether a given number is a Prime number or not

// Date-> 11/17/23 ,Author Name = Aman Singh

/*
Prime numbers are natural numbers that are divisible by only 1 and the number itself. In other words, prime numbers are positive
integers greater than 1 with exactly two factors, 1 and the number itself.
*/
#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number\n");
    scanf("%d", &num);

    // for (int i = 2; i <= num / 2; i++)
    // {
    //     if (num % i == 0)
    //     {
    //         printf("%d is a not prime number\n", num);
    //         break;
    //     }
    //     if (num % i != 0 && i == num / 2)
    //         printf("%d is a prime number",num);
    // }

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            count++;
        if (count > 1)
            break;
    }
    count > 1 ? printf("%d is a not a prime number\n", num) : printf("%d is a prime number\n", num);

    return 0;
}