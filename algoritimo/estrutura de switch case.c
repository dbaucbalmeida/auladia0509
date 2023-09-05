#include<stdio.h>

//estrutura de switch case

int  main(){

int opcao;

    printf("digite o dia da semana");
    scanf("%d",&opcao);

switch(opcao){
    case 1:
    printf("domingo");
    break;

    case 2:
    printf("\nsegunda");
    break;

    case 3:
    printf("\nterca");
    break;

    case 4:
    printf("\nquarta");
    break;

    case 5:
    printf("\nquinta");
    break;

    case 6:
    printf("\nsexta");
    break;

    case("\nsabado");
    break;

default:
    printf("nenhuma das opcoes acima");
}

}