#include <stdio.h>
#include <stdlib.h>
#define TAM 50

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
    char ID[TAM];// CPF/CNPJ
    int tipo; //0:física, 1:jurídica
    TEndereco enderecoCompleto;
    TData dataNascimento;
    char nome[TAM];
} TCliente;

typedef struct moduloCliente
{
    TCliente vetor[TAM];
    int indice;
} TModuloCliente;

void LerCliente(TCliente *cliente);
void ImprimirCliente(TCliente cliente);
void IniciarModuloCliente(TModuloCliente *modulo);
void InserirCliente(TModuloCliente *modulo, TCliente cliente);
int PesquisarCliente(TModuloCliente modulo, TCliente cliente);
void ImprimirTodosClientes(TModuloCliente modulo);
void AlterarCliente(TModuloCliente *modulo, TCliente cliente);
void ExcluirCliente (TModuloCliente *modulo, TCliente cliente);
