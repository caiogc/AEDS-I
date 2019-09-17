#include <stdio.h>
#include <stdlib.h>
#include "vendas.h"

int main()
{
//declaracao de variaveis auxiliares

TCliente cliente1;
/*LerCliente (&cliente1);
ImprimirCliente(cliente1);
*/
TProduto produto1;
//LerProduto(&produto1);
//ImprimirProduto(produto1);

/*TVenda venda1;
LerVenda(&venda1);
ImprimirVenda(venda1);
*/

//Modulos
TModuloProduto modulo1;
TModuloCliente modulo2;
TModuloVendas modulo3;

//TESTE 1 - Leitura
/*IniciarModuloProduto(&modulo1);
LerProduto(&produto1);
InserirProduto(&modulo1, produto1);//produto cadastrado com a funcao de leitura anterior
LerProduto(&produto1);
InserirProduto(&modulo1, produto1);//produto cadastrado com a funcao anterior = Total de 2 cadastros
*/
IniciarModuloCliente(&modulo2);
LerCliente(&cliente1);
InserirCliente(&modulo2, cliente1);//produto cadastrado com a funcao de leitura anterior
LerCliente(&cliente1);
InserirCliente(&modulo2, cliente1);//produto cadastrado com a funcao anterior = Total de 2 cadastros
ImprimirTodosClientes(modulo2);

//TESTE 2 - Pesquisar
/*printf("\n>>>>>>>Pesquisar produto<<<<<<<\nDigite o codigo: ");
fflush(stdin);
scanf("%d",&produto1.codigo);
int i;//indice auxiliar
i = PesquisarProduto(modulo1, produto1);

if(i != -1){
    printf("\nPRODUTO ENCONTRADO!!");
    ImprimirProduto(modulo1.vetor[i]);

}
else{
    printf("\nNAO ENCONTRADO!");
}
*/
//Teste - Alterar
/*ImprimirTodosProdutos(modulo1);
printf("\nDigite o codigo do produto que deseja alterar: ");
fflush(stdin);
scanf("%d",&produto1.codigo);
AlterarPoduto(&modulo1, produto1);
ImprimirTodosProdutos(modulo1);
*/

//Teste - Excluir
/*ImprimirTodosProdutos(modulo1);
printf("\nDigite o codigo do produto que deseja excluir: ");
fflush(stdin);
scanf("%d",&produto1.codigo);
ExcluirProduto(&modulo1,produto1);
ImprimirTodosProdutos(modulo1);
*/
return 0;
}

