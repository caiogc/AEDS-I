#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void MSG_MENU()
{
    system("cls");
    printf("\n>>>>>>>>>>>>>>> MENU <<<<<<<<<<<<<<<<<");
    printf("\n\n\t1. MODULO 1 - PRODUTO");
    printf("\n\t2. MODULO 2 - CLIENTE");
    printf("\n\t3. MODULO 3 - VENDA");
    printf("\n\t4. SAIR");
}

void MSG_SUBMENU(int numero_modulo)
{
    system("cls");
    printf("\n>>>>>>>>>>>>>>> Modulo %d <<<<<<<<<<<<<<<<<",numero_modulo);
    printf("\n\n\t1. INSERIR");
    printf("\n\t2. PESQUISAR");
    printf("\n\t3. ALTERAR");
    printf("\n\t4. EXCLUIR");
    printf("\n\t5. RELATORIO");
    printf("\n\t6. SAIR");
}
void SubMenuModulo1(TModuloProduto *modulo, TProduto produto)
{
    int opcao=0;
    do
    {
        MSG_SUBMENU(1);
        printf("\nDigite um opcao: ");
        fflush(stdin);
        scanf("%d", &opcao);



        switch(opcao)
        {
        case 1: //Funcao Inserir
            LerProduto(&produto);
            InserirProduto(modulo, produto);//produto cadastrado com a funcao de leitura anterior
            system("pause");
            break;

        case 2: //Funcao Pesquisar
            printf("\n---PESQUISAR PRODUTO\nDigite o codigo: ");
            fflush(stdin);
            scanf("%d",&produto.codigo);
            int i;//indice auxiliar
            i = PesquisarProduto(*modulo, produto);
            if(i != -1)
            {
                printf("\nPRODUTO ENCONTRADO!!");
                ImprimirProduto(modulo->vetor[i]);
            }
            else
            {
                printf("\nNAO ENCONTRADO!");
            }
            system("pause");
            break;

        case 3: //Funcao Alterar
            printf("\n---ALTERAR PRODUTO---\nDigite o codigo do produto que deseja alterar: ");
            fflush(stdin);
            scanf("%d",&produto.codigo);
            AlterarPoduto(modulo, produto);
            system("pause");
            break;

        case 4: //Funcao Excluir
            printf("\n---EXCLUIR PRODUTO\nDigite o codigo do produto que deseja excluir: ");
            fflush(stdin);
            scanf("%d",&produto.codigo);
            ExcluirProduto(modulo,produto);
            system("pause");
            break;

        case 5: //Imprimir todos
            ImprimirTodosProdutos(*modulo);
            system("pause");
            break;

        case 6: //SAIR
            printf(">>>>>> MSG: Saindo do MODULO... <<<<<<<<<");
            system("pause");
            break;

        default:
            printf(">>>>>>> MSG: DIGITE UMA OPCAO VALIDA!!!<<<<<<<<<");
            system("pause");
        }
    }
    while(opcao != 6);
}

void SubMenuModulo2(TModuloCliente *modulo, TCliente cliente)
{
    int opcao=0;
    do
    {
        MSG_SUBMENU(2);
        printf("\nDigite um opcao: ");
        fflush(stdin);
        scanf("%d", &opcao);



        switch(opcao)
        {
        case 1: //Funcao Inserir
            printf("\n---INSERIR CLIENTE---");
            LerCliente(&cliente);
            InserirCliente(modulo, cliente);//produto cadastrado com a funcao de leitura anterior
            system("pause");
            break;

        case 2: //Funcao Pesquisar
            printf("\n---PESQUISAR CLIENTE---\nDigite o ID: ");
            fflush(stdin);
            fgets(cliente.ID,TAM,stdin);
            int i;//indice auxiliar
            i = PesquisarCliente(*modulo, cliente);
            if(i != -1)
            {
                printf("\nCLIENTE ENCONTRADO!!");
                ImprimirCliente(modulo->vetor[i]);
            }
            else
            {
                printf("\nNAO ENCONTRADO!");
            }
            system("pause");
            break;

        case 3: //Funcao Alterar
            printf("\n---ALTERAR CLIENTE---\nDigite o ID do cliente que deseja alterar: ");
            fflush(stdin);
            fgets(cliente.ID,TAM,stdin);
            AlterarCliente(modulo, cliente);
            system("pause");
            break;

        case 4: //Funcao Excluir
            printf("\n---EXCLUIR CLIENTE---\nDigite o ID do cliente que deseja excluir: ");
            fflush(stdin);
            fgets(cliente.ID,TAM,stdin);
            ExcluirCliente(modulo,cliente);
            system("pause");
            break;

        case 5: //Imprimir todos
            ImprimirTodosClientes(*modulo);
            system("pause");
            break;

        case 6: //SAIR
            printf(">>>>>> MSG: Saindo do MODULO... <<<<<<<<<");
            system("pause");
            break;

        default:
            printf(">>>>>>> MSG: DIGITE UMA OPCAO VALIDA!!!<<<<<<<<<");
            system("pause");
        }
    }
    while(opcao != 6);
}


void SubMenuModulo3(TModuloVendas *modulo3, TVenda vendas, TModuloProduto *modulo1, TModuloCliente modulo2)
{
    int opcao=0;
    do
    {
        MSG_SUBMENU(3);
        printf("\nDigite um opcao: ");
        fflush(stdin);
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 1: //Funcao Inserir
            LerVenda(&vendas);
            InserirVenda(modulo3, vendas, modulo1, modulo2);
            system("pause");
            break;

        case 2: //Funcao Pesquisar
            printf("\n---PESQUISAR VENDA---\nDigite o ID do cliente: ");
            fflush(stdin);
            fgets(vendas.ID,TAM,stdin);

            printf("\nDigite o codigo do produto: ");
            fflush(stdin);
            scanf("%d",&vendas.codigo);

            int i;//indice auxiliar
            i = PesquisarVenda(*modulo3, vendas);
            if(i != -1)
            {
                printf("\nVENDA ENCONTRADA!!");
                ImprimirVenda(modulo3->vetor[i]);
            }
            else
            {
                printf("\nNAO ENCONTRADA!");
            }
            system("pause");
            break;
        case 3: //Funcao Alterar
            printf("\n---PESQUISAR VENDA---\nDigite o ID do cliente: ");
            fflush(stdin);
            fgets(vendas.ID,TAM,stdin);

            printf("\nDigite o codigo do produto: ");
            fflush(stdin);
            scanf("%d",&vendas.codigo);

            AlterarVenda(modulo3,vendas);
            system("pause");
            break;
        case 4: //Funcao Excluir
            printf("\n---PESQUISAR VENDA---\nDigite o ID do cliente: ");
            fflush(stdin);
            fgets(vendas.ID,TAM,stdin);

            printf("\nDigite o codigo do produto: ");
            fflush(stdin);
            scanf("%d",&vendas.codigo);

            ExcluirVenda(modulo3,vendas);
            system("pause");
            break;

        case 5: //Imprimir todos
            ImprimirTodasVendas(*modulo3);
            system("pause");
            break;

        case 6: //SAIR
            printf(">>>>>> MSG: Saindo do MODULO... <<<<<<<<<");
            system("pause");
            break;

        default:
            printf(">>>>>>> MSG: DIGITE UMA OPCAO VALIDA!!!<<<<<<<<<");
            system("pause");
        }
    }
    while(opcao != 6);
}
