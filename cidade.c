#include <stdio.h>

#define L 4
#define C 12

int main()
{
    double cidade[L][C];
    int i = 0, j = 0, contMais200 = 0;
    double mediamax = 0, mediamed = 0, mediamin = 0, medMais200 = 0, somaMais200 = 0;
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            scanf(" %lf", &cidade[i][j]);
        }
    }
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            switch (i)
            {
            case 0:
                mediamax += cidade[i][j]/C;
                break;
            
            case 1:
                mediamed += cidade[i][j]/C;
                break;

            case 2:
                mediamin += cidade[i][j]/C;
                break;

            case 3:
                if (cidade[i][j] > 200)
                {
                    contMais200++;
                    somaMais200 += cidade[1][j];
                }
            default:
                break;
            }
        }
    }
    medMais200 = somaMais200/contMais200;
    printf("\nMedia Maxima: %.1lf\n", mediamax);
    printf("\nMedia media: %.1lf\n", mediamed);
    printf("\nMedia Minima: %.1lf\n", mediamin);
    printf("\nTemp media precipitacao: %.1lf\n", medMais200);
    return 0;
}
