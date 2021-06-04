#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, c = 0, rows, sf = 0;
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            sf++;
            if (i % 2 == 0)
            {
                c = 0;
                printf("%d", c);
            }
            else
            {
                c = 1;
                printf("%d", c);
                
            }
        }
        if(c != 0){
        printf("=%d", j-1);}
        printf("\n");
    }
    printf("%d", sf);
}