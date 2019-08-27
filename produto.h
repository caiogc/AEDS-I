#include <stdio.h>
#include <stdlib.h>
#define TAM 50

typedef struct moduloProduto
{
    typedef struct data
    {
        int dia;
        int mes;
        int ano;
    } TData;

    typedef struct produto
    {
        int codigo;//id
        char nome[TAM];
        char descricao[150];
        TData dataFabricacao;
        int lote;
        int quantidade;
        float preco;

    } TProduto;

    TProduto vetor[TAM];
    int indice;

} TModuloProduto;

