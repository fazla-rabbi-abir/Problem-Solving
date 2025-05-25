#include <stdio.h>

void findMinMax(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    printf("%d %d", min, max);
}

int main() 
{
    int n;
    scanf("%d", &n);

    int arr[1000];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    findMinMax(arr, n);

    return 0;
}
