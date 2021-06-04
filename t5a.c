#include <stdio.h>
#define LIM 100
int main()
{
    float vetor[20], x = 0;
    int i;

    for (i = 0; i < 20; i++)
    {
        scanf("%f", &vetor[i]);
    }

    int achou = 0;
    while (x >= 0)
    {
        scanf("\n%f", &x);

        for (i = 0; (achou==0 && i<LIM) ; i++)
        {
            if (vetor[i] == x)
            {
                printf("existe\n");
                
                break;
            }
            
        }
            if (achou == 0 && x >=0 && vetor[i] != x)
            {
                printf("nao existe\n");
            }
    }
}