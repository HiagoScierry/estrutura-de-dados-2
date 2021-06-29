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
        }
        else if (chave > vetor[meio])
        {
            esquerda = meio + 1;
        }
        else
        {
            return vetor[meio];
        }
    }

    return -1;
}

int buscabinariarecursiva(int *vetor, int chave, int esquerda, int direita)
{
    int meio = (direita + esquerda) / 2;


    if (esquerda > direita)
    {
        return -1;
    }
    else if (vetor[meio] == chave)
    {
        return vetor[meio];
    }
    else if (vetor[meio] > chave)
    {
        return buscabinariarecursiva(vetor, chave, esquerda, meio - 1);
    }
    else
    {
        return buscabinariarecursiva(vetor, chave, meio + 1, direita);
    }
}

int main(int argc, char const *argv[])
{
    int vet[tam], chave, retorno;

    int esquerda, direita;

    esquerda = 0;
    direita = tam - 1;

    for (int i = 0; i < tam; i++)
    {
        vet[i] = i + 1;
    }

    printf("\n Sua lista :");

    for (int i = 0; i < tam; i++)
    {
        printf(" [%i]", vet[i]);
    }

    printf("\n Informe a chave :");
    scanf("%d", &chave);

    // codigo para busca binaria/
    // retorno = buscabinaria(vet, chave);

    // codigo para busca binaria recursiva
    retorno = buscabinariarecursiva(vet, chave, esquerda, direita);


    if (retorno != -1)
    {
        printf("\n encontrou a chave\n");
    }
    else
    {
        printf("\n nao encontrou a chave\n");
    }

    return 0;
}
