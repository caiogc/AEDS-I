#include <stdio.h>
#include <stdlib.h>
#define TAM 50

typedef struct modulo
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
        int tipo; //0:f�sica, 1:jur�dica
        TEndereco enderecoCompleto;
        TData dataNascimento;
        char nome[TAM];

    } TCliente;


    typedef struct vendas
    {
        char ID[TAM];
        int codigo;
        TData dataVenda;
        int tipo; //0: � vista, 1: � prazo
        TData dataPagamento;

    } TVenda;

} TModulo;

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
    lerProduto(TModulo);
    printf("%d",TModulo.TProduto.codigo);

    return 0;
}