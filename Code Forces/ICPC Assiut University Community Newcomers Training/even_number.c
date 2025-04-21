/*Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

Input : Only one line containing a number N (1 ≤ N ≤ 103).
Output : Print the answer according to the required above. If there are no even numbers print -1.*/

#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if(N==1)
    {
        printf("-1");
    }
    else
    {
        for(int i=1; i<=N; i++)
        {
            if(i%2==0)
            {
                printf("%d\n", i);
            }
        }  
    }
    
}