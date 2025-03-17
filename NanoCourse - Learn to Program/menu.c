#include <stdio.h>
#include "ImpostoDeRenda.c"

void menu1(){

    int opcao = 0;

    printf("Digite 1 para calcular o Imposto de Renda (Pessoa Fisica)");
    printf("\n 2 para calcular o Imposto de Renda (Pessoa Fisica)");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
       calculadoraImposto();
        break;

    case 2:
       printf("O aplicativo sera encerrado!");
        break;
    
    default:
        menu1();
        break;
    }


}