#include <stdio.h>

#define T 5

int main()
{
    int matriz[T][T];
    int i,j, aux = 0;
    int pos[3];
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
        for (j = 0; j < T; j++)
        {
            if (matriz[i][j] < menor)
            {
                aux = menor;
                menor = matriz[i][j];
                pos[0] = i;
                pos[1] = j;
            }
        }
    }
    printf("\nO menor numero da matriz eh %i e esta na linha %i e coluna %i\n", menor, pos[0]+1, pos[1]+1);
    return 0;
}
