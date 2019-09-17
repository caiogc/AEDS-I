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
void ImprimirProduto (TProduto produto);
void IniciarModuloProduto(TModuloProduto *modulo);
void InserirProduto(TModuloProduto *modulo, TProduto produto);
int PesquisarProduto(TModuloProduto modulo, TProduto produto);
void ImprimirTodosProdutos(TModuloProduto modulo);
void AlterarPoduto(TModuloProduto *modulo, TProduto produto);
void ExcluirProduto (TModuloProduto *modulo, TProduto produto);
