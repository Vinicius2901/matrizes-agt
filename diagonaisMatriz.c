#include <stdio.h>

#define T 5

int main()
{
    int matriz1[T][T];
    int i,j, aux = T;
    printf("Digite os elementos da matriz: \n");
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            scanf(" %i", &matriz1[i][j]);
        }
    }
    printf("Diagonal principal: ");
    for (i = 0; i < T; i++)
    {
        printf("%i ", matriz1[i][i]);
    }
    printf("\nDiagonal secundaria: ");
    for (i = 0; i < T; i++)
    {
        printf("%i ", matriz1[i][aux-1]);
        aux--;
    }
    printf("\n");
    return 0;
}
