// 10. Write a program to reverse a given number.

// Date-> 11/30/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int ori_num, rev_num = 0, rem = 0;
    printf("Enter a number\n");
    scanf("%d", &ori_num);

    while (ori_num != 0)
    {
        rem = ori_num % 10;
        rev_num = rev_num * 10 + rem;
        ori_num = ori_num / 10;
    }
    printf("Reverse number = %d\n",rev_num);

    return 0;
}