#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

void LerProduto(TProduto *produto)
{
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

    printf("Digite o ano: ");
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
    scanf("%f",&produto->preco);

}

void ImprimirProduto (TProduto produto)
{

    printf("\n\n--PRODUTO--\nCodigo: %d",produto.codigo);

    printf("\nNome: %s",produto.nome);

    printf("\nDescricao: %s",produto.descricao);

    printf("\nData de fabricacao: %d/%d/%d",produto.dataFabricacao.dia,produto.dataFabricacao.mes,produto.dataFabricacao.ano);

    printf("\nLote: %d",produto.lote);

    printf("\nQuantidade em estoque: %d",produto.quantidade);

    printf("\nPreco: %.2f",produto.preco);
}
void IniciarModuloProduto(TModuloProduto *modulo)
{
    modulo->indice=0;
}
void InserirProduto(TModuloProduto *modulo, TProduto produto)
{
    if(modulo->indice<TAM)
    {
        modulo->vetor[modulo->indice]=produto;
        modulo->indice++;
        printf("\nProduto cadastrado com sucesso!");
    }
    else
    {
        printf("\nNAO E POSSIVEL CADASTRAR!!\n");
    }
}
int PesquisarProduto(TModuloProduto modulo, TProduto produto)
{
    int i;
    for(i=0; i<modulo.indice; i++)
    {
        if(modulo.vetor[i].codigo == produto.codigo)
        {
            return i;
        }
    }
    return -1;
}

void ImprimirTodosProdutos(TModuloProduto modulo)
{
    printf("\n>>>>>>LISTA DE PRODUTOS<<<<<<");
    int i;
    for(i=0; i<modulo.indice; i++)
    {
        ImprimirProduto(modulo.vetor[i]);
    }
    system("pause");
}
void AlterarPoduto(TModuloProduto *modulo, TProduto produto)
{
    int i = PesquisarProduto(*modulo, produto);
    if(i != -1)
    {
        LerProduto(&modulo->vetor[i]);
        printf("Produto alterado com sucesso!");
    }
    else
    {
        printf("\nPRODUTO NAO ENCONTRADO!");
    }
}
void ExcluirProduto (TModuloProduto *modulo, TProduto produto)
{
    int i = PesquisarProduto(*modulo, produto);

    if(i != -1)
    {
        ImprimirProduto(modulo->vetor[i]);
        for(    ; i < modulo->indice; i++)
        {
            modulo->vetor[i]=modulo->vetor[i+1];
        }
        modulo->indice--;
        printf("\nProduto excluido com sucesso!!");
    }
    else
    {
        printf("\nPRODUTO NAO ENCONTRADO!!");
    }


}



