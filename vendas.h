#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"



typedef struct data
{
    int dia;
    int mes;
    int ano;
} TData;

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

void LerVenda(TVenda);
