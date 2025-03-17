#include <stdio.h>

int main() {

    float nota_final, nota1, nota2;

    printf("Entre com o valor da nota 1: ");
    scanf("%f", &nota1);

    printf("Entre com o valor da nota 2: ");
    scanf("%f", &nota2);

    nota_final = (nota1 > nota2) ? nota1:nota2;

    printf("O valor da nota final é %f", nota_final);


    return 0;
}
