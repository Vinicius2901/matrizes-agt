#include <stdio.h>

int main()
{
    int n, p, x, y, i, j, k;
    printf ("Digite a quantidade de linhas e colunas da primeira matriz: ");
    scanf("%i %i", &n, &p);
    printf("Digite a quantidade de linhas e colunas da segunda matriz: ");
    scanf("%i %i", &x, &y);
    int A[n][p];
    int B[x][y];
    int AB[n][y];
    if (p != x)
    {
        printf("Não ha produto entre as matrizes.\n");
        return 0;
    }
    else
    {
        printf("Digite os termos da primeira matriz: \n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < p; j++)
            {
                scanf("%i", &A[i][j]);
            }
        }
        printf("Digite os termos da segunda matriz: \n");
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
            {
                scanf("%i", &B[i][j]);
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < y; j++)
            {
                AB[i][j] = 0;
                for (k = 0; k < p; k++)
                {
                    AB[i][j] += A[i][k]*B[k][j];
                }
            }
        }
        printf("Matriz resultante: \n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < y; j++)
            {
                printf("%i ", AB[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
