#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n); 

    int A[n];

    for (int i=0; i<n; i++) 
    {
        scanf("%d", &A[i]);
    }

    int count_div = 0;
    int count_div2 = 0;

    for (int i=0; i<n; i++) 
    {
        if (A[i] % 2 == 0) 
        {
            count_div++;
        } 
        else if (A[i] % 3 == 0) 
        {
            count_div2++;
        }
    }

    printf("%d %d\n", count_div, count_div2);
    return 0;
}
