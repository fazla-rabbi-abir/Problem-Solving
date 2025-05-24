#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = n;

    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=star; j++)
        {
            printf("*");
        }
        printf("\n");
        star--;
    }
}