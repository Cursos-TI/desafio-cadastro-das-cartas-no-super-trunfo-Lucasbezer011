#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    float media;

    printf("Digite a sua primeira nota: \n");
    scanf("%.2f", &nota1);

    printf("Digite a sua segunda nota: \n");
    scanf("%.2f", &nota2);

    printf("Digite a sua terceira nota \n");
    scanf("%.2f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A sua média é: %.2f \n", media);











}