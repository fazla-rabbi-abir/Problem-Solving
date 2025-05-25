#include <stdio.h>

void printSorted(int a, int b, int c) 
{
    int temp;

    if (a > b) 
    { 
        temp = a; 
        a = b; 
        b = temp; 
    }
    if (a > c) 
    { 
        temp = a; 
        a = c; 
        c = temp; 
    }
    if (b > c) 
    { 
        temp = b; 
        b = c; 
        c = temp; 
    }

    printf("%d\n%d\n%d\n", a, b, c);
}

int main() 
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printSorted(a, b, c); 

    printf("\n"); 

    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
