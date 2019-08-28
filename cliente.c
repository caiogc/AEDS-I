#include <stdio.h>
#include <stdlib.h>

void LerCliente(TCliente cliente){
    printf("\nDigite o nome do cliente: ");
    fflush(stdin);
    fgets(cliente.nome,TAM,stdin);

    printf("\ndigite o tipo de cliente: ");
    fflush(stdin);
    scanf("%d",&cliente.tipo);
}
