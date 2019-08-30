#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"

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

typedef struct moduloProduto
{

    TProduto vetor[TAM];
    int indice;
} TModuloProduto;

void LerProduto(TProduto *produto);

