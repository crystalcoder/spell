#include <cs50.h>
#include <stdio.h>
#include <string.h>

// prints a string
int main(void)
{
    string s = GetString();
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c\n", s[i]);
    }
}
