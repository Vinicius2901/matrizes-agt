#include <stdio.h>

#define T 5

int main()
{
    int matriz1[T][T];
    int matriz2[T][T];
    int resultante[T][T];
    int i,j, aux = 0;
    printf("Digite os elementos da primeira matriz: ");
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            scanf(" %i", &matriz1[i][j]);
        }
    }
    printf("Digite os elementos da segunda matriz: ");
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            scanf(" %i", &matriz2[i][j]);
        }
    }
    printf("Matriz resultante da multiplicacao: ");
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            resultante[i][j] = matriz1[i][j] * matriz2[i][j];
            printf("%i ", resultante[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
