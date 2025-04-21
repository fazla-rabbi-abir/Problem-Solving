/*Given four numbers A, B, C and D. Print the result of the following equation :

 X = (A * B) - (C * D).

Input
Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).

Output
Print "Difference  =  " without quotes followed by the equation result.*/
#include <stdio.h>

int main() 
{
    long long int A, B, C, D;

    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    long long int X = (A * B) - (C * D);

    printf("Difference = %lld\n", X);
    
    return 0;
}
