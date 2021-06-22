#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int buscasequencial(int *vetor, int k)
{
    for (int i = 0; i < TAM; i++)
    {
        if (vetor[i] == k)
        {
            return vetor[i];
        }
    }

    return -1;
}

int sentinela(int *vetor, int k)
{
    int i;

    vetor[TAM] = k;
    for (i = 0; vetor[i] != k; i++)
    {
    }

    if (i < TAM)
    {
        return vetor[i];
    }

    return -1;
}


int movendoElemeto(int *vetor, int k){
    int aux;
    
    for (int i = 0; i < TAM; i++)
    {
        if(vetor[i] == k)
        {
            aux = vetor[i];
            for (int j = 0; j <= i; j++)
            {
                vetor[j+1] = vetor[j];
            }
            vetor[0] = aux;
            return aux;            
        }
    }

    return -1;
    
}


int main(int argc, char const *argv[])
{

    int vet[TAM + 1];  // PARA IMPLEMENTAR SETINELA UTILIZE O TAMANHO DE VETOR TAM + 1
    int chave, retorno;

    for (int i = 0; i < TAM; i++)
    {
        printf("\n Informe um numero : ");
        scanf("%i", &vet[i]);
    }

    printf("\n Informe um a chave : ");
    scanf("%i", &chave);

    retorno = sentinela(vet, chave);

    if (retorno != -1)
    {
        printf("\n encontoru a chave");
    }
    else
    {
        printf("\n chave nao encontrada");
    }

    return 0;
}