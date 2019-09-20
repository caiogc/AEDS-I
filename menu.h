#include <stdio.h>
#include <stdlib.h>
#include "vendas.h"

void MSG_SUBMENU(int numero_modulo);
void SubMenuModulo1(TModuloProduto *modulo, TProduto produto);
void SubMenuModulo2(TModuloCliente *modulo, TCliente cliente);
void SubMenuModulo3(TModuloVendas *modulo3, TVenda vendas, TModuloProduto *modulo1, TModuloCliente modulo2);
