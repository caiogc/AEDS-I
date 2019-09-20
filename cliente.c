#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"


void LerCliente(TCliente *cliente)
{
    printf("\nDigite o nome do cliente: ");
    fflush(stdin);
    fgets(cliente->nome,TAM,stdin);

    printf("\nDigite o tipo de cliente: ");
    fflush(stdin);
    scanf("%d",&cliente->tipo);
    if (cliente->tipo == 0)
    {
        printf("\nDigite o CPF: ");
        fflush(stdin);
        fgets(cliente->ID, TAM, stdin);
    }
    else
    {
        printf("\nDigite o CNPJ: ");
        fflush(stdin);
        fgets(cliente->ID, TAM, stdin);
    }
    printf("\nData de nascimento\nDigite o dia: ");
    fflush(stdin);
    scanf("%d",&cliente->dataNascimento.dia);

    printf("\nDigite o mes: ");
    fflush(stdin);
    scanf("%d",&cliente->dataNascimento.mes);

    printf("\nDigite o ano: ");
    fflush(stdin);
    scanf("%d",&cliente->dataNascimento.ano);

    printf("\nDigite a rua: ");
    fflush(stdin);
    fgets(cliente->enderecoCompleto.rua, TAM, stdin);

    printf("\nDigite o numero: ");
    fflush(stdin);
    scanf("%d",&cliente->enderecoCompleto.numero);

    printf("\nDigite o complemento: ");
    fflush(stdin);
    scanf("%d",&cliente->enderecoCompleto.complemento);

    printf("\nDigite o bairro: ");
    fflush(stdin);
    fgets(cliente->enderecoCompleto.bairro, TAM, stdin);

    printf("\nDigite a cidade: ");
    fflush(stdin);
    fgets(cliente->enderecoCompleto.cidade, TAM, stdin);

    printf("\nDigite o CEP: ");
    fflush(stdin);
    scanf("%d",&cliente->enderecoCompleto.cep);
}

void ImprimirCliente(TCliente cliente)
{
    printf("\n\n---CLIENTE---");
    printf("\nNome do cliente: %s",cliente.nome);

    printf("\nTipo de cliente: ");
    if (cliente.tipo == 0)
    {
        printf("Pessoa fisica\nCPF: %s",cliente.ID);
    }
    else
    {
        printf("Pessoa juridica\nCNPJ: %s",cliente.ID);
    }
    printf("\nData de nascimento: %d/%d/%d",cliente.dataNascimento.dia,cliente.dataNascimento.mes,cliente.dataNascimento.ano);

    printf("\nrua %s, %d, complemento %d, bairro %s - %s - CEP - %d",cliente.enderecoCompleto.rua,cliente.enderecoCompleto.numero,cliente.enderecoCompleto.complemento,cliente.enderecoCompleto.bairro,cliente.enderecoCompleto.cidade,cliente.enderecoCompleto.cep);
}

void IniciarModuloCliente(TModuloCliente *modulo)
{
    modulo->indice=0;
}
void InserirCliente(TModuloCliente *modulo, TCliente cliente)
{
    if(modulo->indice<TAM)
    {
        modulo->vetor[modulo->indice]=cliente;
        modulo->indice++;
        printf("\nCliente cadastrado com sucesso!");
    }
    else
    {
        printf("\nNAO E POSSIVEL CADASTRAR!!\n");
    }
}
int PesquisarCliente(TModuloCliente modulo, TCliente cliente)
{
    int i;
    for(i=0; i<modulo.indice; i++)
    {
        if(strcmp(modulo.vetor[i].ID, cliente.ID) == 0)
        {
            return i;
        }
    }
    return -1;
}
void ImprimirTodosClientes(TModuloCliente modulo)
{
    printf("\n>>>>>>>>>LISTA DE CLIENTES<<<<<<<<<<");
    int i;
    for(i=0; i<modulo.indice; i++)
    {
        ImprimirCliente(modulo.vetor[i]);
    }
}
void AlterarCliente(TModuloCliente *modulo, TCliente cliente)
{
    int i = PesquisarCliente(*modulo, cliente);
    if(i != -1)
    {
        LerCliente(&modulo->vetor[i]);
        printf("Cliente alterado com sucesso!");
    }
    else
    {
        printf("\nCLIENTE NAO ENCONTRADO!");
    }
}
void ExcluirCliente (TModuloCliente *modulo, TCliente cliente)
{
    int i = PesquisarCliente(*modulo, cliente);
    int j;
    if(i != -1)
    {
        ImprimirCliente(modulo->vetor[i]);
        for( j=i ; j < modulo->indice; j++)
        {
            modulo->vetor[j]=modulo->vetor[j+1];
        }
        modulo->indice--;
        printf("\nCLIENTE EXCLUIDO COM SUCESSO!!");

    }
    else
    {
        printf("Nao encontrado");
    }

}
