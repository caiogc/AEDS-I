#include <stdio.h>
#include <stdlib.h>
#include "vendas.h"

int main()
{
//declaracao de variaveis auxiliares
TProduto produto1;
LerProduto(&produto1);

TCliente cliente1;
LerCliente (&cliente1);
ImprimirCliente(cliente1);

TVenda venda1;
LerVenda(&venda1);


//Modulos
TModuloProduto modulo1;
TModuloCliente modulo2;
TModuloVendas modulo3;

printf("\nProduto\n")

return 0;
}
