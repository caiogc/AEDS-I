#include <stdio.h>
#include <stdlib.h>
#define TAM 50
#include "vendas.h"
#include "produto.h"
#include "cliente.h"


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

typedef struct endereco
{
    char rua[TAM];
    int numero;
    int complemento;
    char bairro[TAM];
    char cidade[TAM];
    int cep;

} TEndereco;



typedef struct cliente
{
    char id[TAM];// CPF/CNPJ
    int tipo; //0:física, 1:jurídica
    TEndereco enderecoCompleto;
    TData dataNascimento;
    char nome[TAM];

} TCliente;


typedef struct vendas
{
    char ID[TAM];
    int codigo;
    TData dataVenda;
    int tipo; //0: à vista, 1: à prazo
    TData dataPagamento;

} TVenda;

void lerProduto(TModulo)
{
printf("Codigo:/t");
scanf("%d",&TModulo.TProduto.codigo);
}
void lerCliente()
{

}
void lerVendas()
{

}


int main()
{
//declaracao de variaveis auxiliares
TProduto produto1;
TCliente cliente1;
TVenda venda1;

//Modulos
TModuloProduto modulo1;
TModuloCliente modulo2;
TModuloVenda modulo3;

return 0;
}
