#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

typedef struct vendas
{
    char ID[TAM];
    int codigo;
    TData dataVenda;
    int tipo; //0: à vista, 1: à prazo
    TData dataPagamento;

} TVenda;

typedef struct moduloVendas
{
    TVenda vetor[TAM];
    int indice;
} TModuloVendas;

void LerVenda(TVenda *vendas);
