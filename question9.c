// 9. Write a program to calculate LCM of two numbers.

/*
LCM (Least common multipal) -> LCM is a method to get the smallest common multipal of two or more numbers.common multipal means
                               a number which is multipal of two or more numbers.

Example ->
    80 is a LCM of 20 and 16.it means 80 is smallest common multipal number of 20 and 16.
    like -> 16 = 16,32,48,64,80.....
            20 = 20,40,60,80.....

*/

// Date-> 11/23/23 ,Author Name = Aman Singh


#include <stdio.h>
int main()
{

    int x, y, lcm = 1;
    int i = 0;
    int num = 2;

    printf("Enter two numbers\n");
    scanf("%d %d", &x, &y);

    while (i == 0)
    {
        if ((x % num == 0) || (y % num == 0))
        {
            if (x % num == 0)
                x = x / num;
            if (y % num == 0)
                y = y / num;
            lcm = lcm * num;
            if ((x == 1) && (y == 1))
                i = 1;
        }
        else

            num++;
    }

    printf("LCM = %d\n", lcm);

    return 0;
}