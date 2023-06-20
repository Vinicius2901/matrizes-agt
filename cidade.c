#include <stdio.h>

#define Lin 4
#define Col 12

int main()
{
    float cidade[Lin][Col];
    int i = 0, j = 0, contMais200 = 0;
    float mediamax, mediamed, mediamin, medMais200;
    for (i = 0; i < Lin; i++)
    {
        for (j = 0; j < Col; j++)
        {
            scanf(" %f", &cidade[i][j]);
        }
    }
    for (i = 0; i < Lin; i++)
    {
        for (j = 0; j < Col; j++)
        {
            switch (i)
            {
            case 0:
                mediamax += cidade[i][j]/j;
                break;
            
            case 1:
                mediamed += cidade[i][j]/j;
                break;

            case 2:
                mediamin += cidade[i][j];
                break;

            case 3:
                if (cidade[i][j] > 200)
                {
                    contMais200++;
                    medMais200 += cidade[1][j]/contMais200;
                }
            default:
                break;
            }
        }
    }
    printf("Media Máxima: %.1f", mediamax);
    return 0;
}
