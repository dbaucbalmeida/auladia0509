#include<stdio.h>

        /*Faça um algoritmo que calcule a media ponderada das notas de 3 provas. 
        A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, 
        mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. 
        A nota para aprovação deve ser igual ou  superior a 7.0 pontos.*/

        //media ponderada
        //3 provas
        //2 provas sao iguais peso 1
        //1 prova mais peso peso 2

main(){

float prova1,prova2,prova3,media;
    printf("digite prova 1");
    scanf("%f",&prova1);

     printf("digite prova 2");
    scanf("%f",&prova2);

     printf("digite prova 3");
    scanf("%f",&prova3);

        //calcular media ponderada

media=(prova1+prova2+(prova3*2)/4);

        //calcular se o aluno foi aprovado
if(media >=7.0){
    printf("media:%.2f\n",media);
    printf("aluno aprovado! \n");
}else{
    printf("media:%.2f\n"media);
    printf("aluno reprovado");
}
}

    
