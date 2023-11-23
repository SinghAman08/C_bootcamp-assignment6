// 7. Write a program to count digits in a given number

// Date-> 11/17/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int num,count = 0;
    printf("Enter a number\n");
    scanf("%d",&num);

    while (num > 0)
    {
        num = num / 10;
        count ++;
    }
    printf("digits = %d\n",count);
    

    return 0;
}