#include <stdio.h>
#include <stdlib.h>
#include "menu.h"


int main()
{
//declaracao de variaveis auxiliares

    TCliente cliente1;
    TProduto produto1;
    TVenda venda1;

//Modulos
    TModuloProduto modulo1;
    TModuloCliente modulo2;
    TModuloVendas modulo3;

    IniciarModuloProduto(&modulo1);
    IniciarModuloCliente(&modulo2);
    IniciarModuloVenda(&modulo3);

    int opcao=0;
    do
    {
        MSG_MENU();
        printf("\nDigite um opcao: ");
        fflush(stdin);
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 1:
            SubMenuModulo1(&modulo1, produto1);
            break;
        case 2:
            SubMenuModulo2(&modulo2, cliente1);
            break;
        case 3:
            SubMenuModulo3(&modulo3, venda1, &modulo1, modulo2);
            break;
        case 4: //SAIR
            printf(">>>>>> MSG: Saindo do programa... <<<<<<<<<");
            system("pause");
            break;
        default:
            printf(">>>>>>> MSG: DIGITE UMA OPCAO VALIDA!!!<<<<<<<<<");
            system("pause");
        }
    }
    while(opcao != 4);
    return 0;
}


