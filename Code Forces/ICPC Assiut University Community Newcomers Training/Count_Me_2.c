#include <stdio.h>
#include <string.h>

int main() 
{
    char S[100001]; 
    scanf("%s", S);

    int count = 0;

    for (int i=0; S[i]!='\0'; i++) 
    {
        char ch = S[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') 
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
