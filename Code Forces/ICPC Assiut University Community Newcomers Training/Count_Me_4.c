#include <stdio.h>

int main() 
{
    char S[10001];
    int count[26]={0};

    scanf("%s", S);

    for (int i=0; S[i]!='\0'; i++) 
    {
        count++;
    }

    for (int i=0; i<26; i++) 
    {
        if (count[i] > 0) 
        {
            printf("%c - %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}
v