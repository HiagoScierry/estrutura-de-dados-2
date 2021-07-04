#include <stdio.h>
#include <stdlib.h>

#define tamPadrao 10
#define tamTexto 3

int forcabruta(char *texto, char *padrao)
{
    int j;

    for (int i = 0; i <= tamPadrao - tamTexto; i++)
    {
        j = 0;
        while (j < tamTexto && texto[i + j] == padrao[j])
        {
            j = j + 1;
            if (j == tamTexto)
            {
                return i;
            }
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    // O padrão e a lista ja estão iniciados para testar o codigo

    char texto[tamPadrao] = {'a', 'b', 'c', 'a', 'b', 'a', 'c', 'a', 'a', 'a'};
    char padrao[tamTexto] = {'a', 'a', 'a'};
    int retorno;

    retorno = forcabruta(texto, padrao);
    printf("\nposição inicial do padrao : %i", retorno);

    if (retorno != -1)
    {
        printf("\ncadeia de caracteres encontrada : ");
        for (int i = retorno; i < tamPadrao; i++)
        {
            printf("[%c]", texto[i]);
        }
    }
    else
    {
        printf("\ncadeia de caracteres não encontrada");
    }

    return 0;
}
