// 6. Write a program to calculate factorial of a number

// Date-> 11/17/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter a number:\n");
    scanf("%d", &n);
    int i;

    for (i = n; i >= 1; i--)
        fact = fact * i;

    printf("factor of %d is %d\n",n, fact);

    return 0;
}