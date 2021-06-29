#include <stdio.h>
#include <stdlib.h>

#define tam 5

int buscabinaria(int *vetor, int chave)
{

    int esquerda, direita, meio;
    esquerda = 0;
    direita = tam - 1;

    while (esquerda <= direita)
    {
        meio = (esquerda + direita) / 2;

        if (chave < vetor[meio])
        {
            direita = meio - 1;
        } else if( chave > vetor[meio]) {
            esquerda = meio + 1;
        } else {
            return vetor[meio];
        }
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    int vet[tam], chave,retorno;

    for (int i = 0; i < tam; i++)
    {
        vet[i] = i+1;
    }

    printf("\n Informe a chave :");
    scanf("%d", &chave);

    retorno = buscabinaria(vet, chave);
    
    if(retorno != -1)
    {
        printf("\n encontrou a chave\n");
    } else {
        printf("\n nao encontrou a chave\n");
    }

    return 0;
}
