#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[81];
    int i = 0;

    fgets(palavra, 81, stdin);
					
  

    for (i = strlen(palavra)-2; i >= 0; i--)
    {
        printf("%c", palavra[i]);
    }
    
}