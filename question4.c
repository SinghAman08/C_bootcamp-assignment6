// 4. Write a program to calculate sum of squares of first N natural numbers

// Date-> 11/17/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter a number N to calculate sum of squares of  N natural numbers:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum = sum + (i * i);

    printf("sum = %d\n", sum);

    return 0;
}