#include <stdio.h>

#define T 5

int main()
{
    int matriz[T][T];
    int i,j, aux = 0;
    int pos[T][3];
    printf("Digite os elementos da matriz: ");
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < T; j++)
        {
            scanf(" %i", &matriz[i][j]);
        }
    }
    int menor = matriz[0][0];
    for (i = 0; i < T; i++)
    {
        menor = matriz[i][0];
        for (j = 0; j < T; j++)
        {
            if (matriz[i][j] < menor)
            {
                aux = menor;
                menor = matriz[i][j];
                pos[i][0] = j;
            }
        }
        printf("\nO menor numero da linha %i eh %i e esta na coluna %i\n\n", i+1, menor, pos[i][0]+1);
    }
    return 0;
}
