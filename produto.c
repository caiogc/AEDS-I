#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

void LerProduto(TProduto *produto){
    printf("\nDigite o codigo do produto: ");
    fflush(stdin);
    scanf("%d",&produto->codigo);

    printf("\nDigite o nome do produto: ");
    fflush(stdin);
    fgets(produto->nome, TAM, stdin);

    printf("\nDigite a descricao: ");
    fflush(stdin);
    fgets(produto->descricao, 150, stdin);

    printf("\nData de fabricacao\nDigite o dia: ");
    fflush(stdin);
    scanf("%d",&produto->dataFabricacao.dia);

    printf("Digite o mes: ");
    fflush(stdin);
    scanf("%d",&produto->dataFabricacao.mes);

    printf("Digite o mes: ");
    fflush(stdin);
    scanf("%d",&produto->dataFabricacao.ano);

    printf("Digite o lote: ");
    fflush(stdin);
    scanf("%d",&produto->lote);

    printf("Digite a quantidade do produto em estoque: ");
    fflush(stdin);
    scanf("%d",&produto->quantidade);

    printf("Digite o preco: ");
    fflush(stdin);
    scanf("%.2f",&produto->preco);






}

