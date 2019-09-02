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

    printf("\nA vista(0) ou A prazo?: ");
    fflush(stdin);
    scanf("%d",&vendas->tipo);

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
