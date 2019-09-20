#include <stdio.h>
#include <stdlib.h>
#include "vendas.h"

//declaracao de variaveis auxiliares



void LerVenda(TVenda *vendas)
{
    printf("\n>>>>>VENDA<<<<<<");

    printf("\nDigite ID do cliente: ");
    fflush(stdin);
    fgets(vendas->ID,TAM,stdin);

    printf("\nDigite o codigo do produto: ");
    fflush(stdin);
    scanf("%d",&vendas->codigo);

    printf("\nQuantas unidades deseja adquirir?");
    fflush(stdin);
    scanf("%d",&vendas->quantidade);

    printf("\nData da venda\nDia: ");
    fflush(stdin);
    scanf("%d",&vendas->dataVenda.dia);

    printf("\nMes: ");
    fflush(stdin);
    scanf("%d",&vendas->dataVenda.mes);

    printf("\nAno: ");
    fflush(stdin);
    scanf("%d",&vendas->dataVenda.ano);

    printf("\nA vista(0) ou A prazo(1)?: ");
    fflush(stdin);
    scanf("%d",&vendas->tipo);

    if(vendas->tipo == 1)
    {
        printf("\nData do pagamento\nDia: ");
        fflush(stdin);
        scanf("%d",&vendas->dataPagamento.dia);

        printf("\nMes: ");
        fflush(stdin);
        scanf("%d",&vendas->dataPagamento.mes);

        printf("\nAno: ");
        fflush(stdin);
        scanf("%d",&vendas->dataPagamento.ano);
    }
}

void ImprimirVenda(TVenda vendas)
{
    printf("\n\n---VENDA---");

    printf("\nID do produto: %s",vendas.ID);
    printf("\nCodigo do produto: %d",vendas.codigo);
    printf("\nData da Venda: %d/%d/%d",vendas.dataVenda.dia,vendas.dataVenda.mes,vendas.dataVenda.ano);
    printf("\nQuantidade vendida: %d",vendas.quantidade);
    if(vendas.tipo == 0)
    {
        printf("\nPagamento a vista em: %d/%d/%d",vendas.dataVenda.dia,vendas.dataVenda.mes,vendas.dataVenda.ano);
    }
    else
    {
        printf("\nData do pagamento: %d/%d/%d",vendas.dataPagamento.dia,vendas.dataPagamento.mes,vendas.dataPagamento.ano);
    }
}
void IniciarModuloVenda(TModuloVendas *modulo)
{
    modulo->indice=0;
}
void InserirVenda(TModuloVendas *modulo3, TVenda vendas, TModuloProduto *modulo1, TModuloCliente modulo2)
{
    int i, j;
    TProduto produto;
    produto.codigo = vendas.codigo;
    i=PesquisarProduto(*modulo1,produto);

    TCliente cliente;
    strcpy(cliente.ID, vendas.ID);
    j=PesquisarCliente(modulo2,cliente);

    if(i != -1 && j == 0 && modulo3->indice<TAM && modulo1->vetor[i].quantidade >= vendas.quantidade)
    {
        modulo1->vetor[i].quantidade -= vendas.quantidade;
        modulo3->vetor[modulo3->indice]=vendas;
        modulo3->indice++;
        printf("\nVenda cadastrada com sucesso!");

    }
    else
    {
        printf("\nNAO E POSSIVEL CADASTRAR!!\n");
    }

}

int PesquisarVenda(TModuloVendas modulo, TVenda vendas)
{
    int i;
    for(i=0; i<modulo.indice; i++)
    {
        if(modulo.vetor[i].codigo == vendas.codigo && strcmp(modulo.vetor[i].ID, vendas.ID) == 0)
        {
            return i;
        }
    }
    return -1;
}
void ImprimirTodasVendas(TModuloVendas modulo)
{
    printf("\n>>>>>>>>>>LISTA DE VENDAS<<<<<<<<<<<<");
    int i;
    for(i=0; i<modulo.indice; i++)
    {
        ImprimirVenda(modulo.vetor[i]);
    }
}
void AlterarVenda(TModuloVendas *modulo, TVenda vendas)
{
    int i = PesquisarVenda(*modulo, vendas);
    if(i != -1)
    {
        LerVenda(&modulo->vetor[i]);
        printf("Venda alterada com sucesso!");
    }
    else
    {
        printf("\nVENDA NAO ENCONTRADA!");
    }
}
void ExcluirVenda (TModuloVendas *modulo, TVenda vendas)
{
    int i = PesquisarVenda(*modulo, vendas);

    if(i != -1)
    {
        ImprimirVenda(modulo->vetor[i]);
        for(  ; i < modulo->indice; i++)
        {
            modulo->vetor[i]=modulo->vetor[i+1];
        }
        modulo->indice--;
        printf("\nVenda excluida com sucesso!");
    }
    else
    {
        printf("\nVENDA NAO ENCONTRADA!!!");
    }
}
