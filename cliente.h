#include <stdio.h>
#include <stdlib.h>
#define TAM 50

typedef struct moduloCliente
{
    typedef struct data
    {
        int dia;
        int mes;
        int ano;
    } TData;

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
} TModuloCliente;
