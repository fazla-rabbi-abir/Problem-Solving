/*Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

Input
Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

Output
Print 3 lines that contain the following in the same order:

"X + Y = summation result" without quotes.
"X * Y = multiplication result" without quotes.
"X - Y = subtraction result" without quotes.*/

#include<stdio.h>

int main()
{
    long long int X, Y;
    scanf("%lld %lld", &X, &Y);

    long long int sum = X + Y;
    printf("%lld + %lld = %lld\n",X,Y, sum);

    long long int mul = X * Y;
    printf("%lld * %lld = %lld\n", X,Y, mul);

    long long int sub = X - Y;
    printf("%lld - %lld = %lld", X, Y, sub);
}