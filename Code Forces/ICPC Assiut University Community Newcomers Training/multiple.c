/*Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

Input: Only one line containing two numbers A, B (1  ≤  A, B  ≤  106)
Output: Print the "Multiples" or "No Multiples" corresponding to the read numbers.
Note: A is said to be Multiple of B if B is divisible by A.*/

#include<stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    if(A%B==0 || B%A==0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }
}