//Descarte de nota mais baixa.
#include <stdio.h>

void main()
{
    float media, nota_1, nota_2;

    printf("Entre com o valor da nota 1: ");
    scanf("%f", &nota_1);

    printf("Entre com o valor da nota 2: ");
    scanf("%f", &nota_2);

    media = (nota_1 + nota_2) / 2;

    if (media >= 7)
    {
        printf("Voce foi aprovado. Sua nota é %f", media);
    }
    else if (media < 7 && media > 4)
    {
      printf("Voce precisa fazer a prova final. Sua nota é %f", media);
    }
    else
    {
        printf("Voce foi reprovado. Sua nota é %f", media);
    }

}