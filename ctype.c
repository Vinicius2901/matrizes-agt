#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char texto[1000] = "De acordo com a sede da ONU no Brasil, uma serie de tratados internacionais e outros instrumentos adotados desde 1945 expandiram o corpo do direito internacional  sobre os direitos humanos. entre eles, a Convencao para a Prevencao e a Repressao do Crime de Genocidio (1948), a Convencao internacional sobre a eliminacao de Todas as Formas de Discriminacao Racial (1965), a Convencao sobre a eliminacao de Todas as Formas de Discriminacao contra as Mulheres (1979), a Convencao sobre os Direitos da Crianca (1989) e a Convencao sobre os Direitos das Pessoas com Deficiencia (2006).";
    int i, vogais = 0, tam = strlen(texto), letras = 0, pontuacao = 0, espaco = 0;
    char tmin;
    
    for (i = 0; i < tam; i++)
    {
        tmin = tolower(texto[i]);
        if (tmin == 'a' || tmin == 'e' || tmin == 'i' || tmin == 'o' || tmin == 'u')
        {
            vogais++;
        }
        if (isalpha(texto[i]))
        {
            letras++;
        }
        if (ispunct(texto[i]))
        {
            pontuacao++;
        }
        if (isspace(texto[i]))
        {
            espaco++;
        }
    }
    printf("Numero de vogais: %i\n", vogais);
    printf("Numero de letras: %i\n", letras);
    printf("Numero de pontos: %i\n", pontuacao);
    printf("Numeor de espacos: %i\n", espaco);
    return 0;
}
