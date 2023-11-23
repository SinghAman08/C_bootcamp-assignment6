// 3. Write a program to calculate sum of first N odd natural numbers

// Date-> 11/17/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int n, sum = 0;
    int num = 1;
    printf("Enter a number N to calculate sum of first N odd natural numbers:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + num;
        num += 2;
    }   

    printf("sum = %d\n",sum);

    return 0;
}