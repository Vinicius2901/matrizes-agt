#include <stdio.h>

#define T 3

int main()
{
    int matriz1[T][T];
    int matriz2[T][T];
    int resultante[T][T];
    int i, j, aux1 = 0, aux2 = 0;
    printf("Digite os elementos da primeira matriz: \n");
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            scanf(" %i", &matriz1[i][j]);
            resultante[i][j] = 0;
        }
    }
    printf("Digite os elementos da segunda matriz: \n");
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            scanf(" %i", &matriz2[i][j]);
        }
    }
    printf("Matriz resultante da multiplicacao: \n");
    /*for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            resultante[i][j] += matriz1[i][j] * matriz2[j][i];
            printf("%i ", resultante[i][j]);
        }
        printf("\n");
    }*/
    i = 0;
    while (i < T)
    {
        for (j = 0; j < T; j++)
        {
            resultante[i][aux1] += matriz1[i][j]*matriz2[j][aux1];
        }
        if (aux1 == T-1)
        {
            i++;
            aux1 = -1;
        }
        aux1++;
    }
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            printf("%i ", resultante[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
