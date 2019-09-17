#include <stdio.h>
#include <stdlib.h>
#include "vendas.h"

void LerVenda(TVenda *vendas)
{

    printf("\nDigite ID da venda: ");
    fflush(stdin);
    fgets(vendas->ID,TAM,stdin);

    printf("\nDigite o codigo da venda: ");
    fflush(stdin);
    scanf("%d",&vendas->codigo);

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

    if(&vendas->tipo == 1){
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

void ImprimirVenda(TVenda vendas){
    printf("\n>>>>>>>>VENDAS<<<<<<<<<<<\n");

    printf("\nID da venda: %s",vendas.ID);
    printf("\nCodigo da venda: %d",vendas.codigo);
    printf("\nData da Venda: %d/%d/%d",vendas.dataVenda.dia,vendas.dataVenda.mes,vendas.dataVenda.ano);
    if(vendas.tipo == 0){
        printf("\nPagamento a vista em: %d/%d/%d",vendas.dataVenda.dia,vendas.dataVenda.mes,vendas.dataVenda.ano);
    }
    else{
        printf("\nData do pagamento: %d/%d/%d",vendas.dataPagamento.dia,vendas.dataPagamento.mes,vendas.dataPagamento.ano);
    }
}
void IniciarModuloVenda(TModuloVendas *modulo){
    modulo->indice=0;
}
void InserirVenda(TModuloVendas *modulo, TVenda vendas){
    if(modulo->indice<TAM)
    {
        modulo->vetor[modulo->indice]=cliente;
        modulo->indice++;
        printf("\nVenda cadastrada com sucesso!");
    }
    else
    {
        printf("\nNAO E POSSIVEL CADASTRAR!!\N");
    }
}
int PesquisarVenda(TModuloVendas modulo, TVenda vendas){
    int i;
    for(i=0; i<modulo.indice; i++)
    {
        if(modulo.vetor[i].ID == vendas.ID)
        {
            return i;
        }
    }
    return -1;
}
void ImprimirTodasVendas(TModuloVendas modulo){
    printf("\n>>>>>Lista de Vendas<<<<<<");
    int i;
    for(i=0; i<modulo.indice; i++)
    {
        ImprimirVenda(modulo.vetor[i]);
    }
}
void AlterarVenda(TModuloVendas *modulo, TVenda vendas){
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
void ExcluirVenda (TModuloVendas *modulo, TVenda vendas){
    int i = PesquisarVenda(*modulo, vendas);

    for( i ; i < modulo->indice; i++)
    {
        modulo->vetor[i]=modulo->vetor[i+1];
    }
    modulo->indice--;
}
