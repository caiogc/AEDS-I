#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

typedef struct vendas
{
    char ID[TAM];
    int codigo;
    TData dataVenda;
    int tipo; //0: � vista, 1: � prazo
    TData dataPagamento;
    int quantidade;
    float total;

} TVenda;

typedef struct moduloVendas
{
    TVenda vetor[TAM];
    int indice;
} TModuloVendas;

void LerVenda(TVenda *vendas);
void ImprimirVenda(TVenda vendas);
void IniciarModuloVenda(TModuloVendas *modulo);
void InserirVenda(TModuloVendas *modulo3, TVenda vendas, TModuloProduto *modulo1, TModuloCliente modulo2);
int PesquisarVenda(TModuloVendas modulo, TVenda vendas);
void ImprimirTodasVendas(TModuloVendas modulo);
void AlterarVenda(TModuloVendas *modulo, TVenda vendas);
void ExcluirVenda (TModuloVendas *modulo, TVenda vendas);
