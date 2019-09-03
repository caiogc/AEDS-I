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
    printf("\nNome do cliente: %s",cliente.nome);
    //puts(cliente.nome);`


    printf("\nTipo de cliente: ");
    if (cliente.tipo == 0)
    {
        printf("\nPessoa fisica\nCPF: %s",cliente.ID);
        //puts(cliente.ID);
    }
    else
    {
        printf("\nPessoa juridica\nCNPJ: %s",cliente.ID);
        //puts(cliente.ID);
    }
    printf("\nData de nascimento: %d/%d/%d",cliente.dataNascimento.dia,cliente.dataNascimento.mes,cliente.dataNascimento.ano);

    printf("\nRua: %s",cliente.enderecoCompleto);
    //puts(cliente.enderecoCompleto.rua);

    printf("\nNumero: %d ",cliente.enderecoCompleto.numero);

    printf("\nComplemento: %d",cliente.enderecoCompleto.complemento);

    printf("\nBairro: %s",cliente.enderecoCompleto.bairro);
    //puts(cliente.enderecoCompleto.bairro);

    printf("\nCidade: %s",cliente.enderecoCompleto.cidade);
    //puts(cliente.enderecoCompleto.cidade);

    printf("\nCEP: %d",cliente.enderecoCompleto.cep);
}
