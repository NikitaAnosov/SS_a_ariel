/*  0 is false
    1 is true
    x is a check number
*/
//   Recursion    //
#include <stdio.h>
#include <math.h>
// will return if a number is prime
int revP(int x, int temp)
{
    if (x == 0)
        return temp;
    temp = (temp * 10) + (x % 10);
    return revP(x / 10, temp);
}
int isPalindrome(int x)
{
    int temp = revP(x, 0);
    if (temp == x)
        return 1;
    else
        return 0;
}
// will weturn if a number is Armstrong number
int checkArm(int x, int sum)
{
   static int unite, size=0;
    if (x > 0)
    {
        unite = x % 10;
        size = pow(unite, sum) + size;
        checkArm(x / 10, sum);
        return size; /// size = x
    }
    else return 0;
}
int isArmstrong(int x)
{
    int savex = x;
    int sum = 0;
    while (savex > 0)
    {
       savex = savex / 10;
        sum++;
    }
    if (x == checkArm(x, sum))
        return 1;
    else
        return 0;
}

