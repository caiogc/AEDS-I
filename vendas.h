#include <stdio.h>
#include <stdlib.h>
#define TAM 50

typedef struct moduloVendas
{
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

} TModuloVendas;
