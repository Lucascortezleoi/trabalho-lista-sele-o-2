#include <stdio.h>
#include <locale.h>

void main(void) {
    setlocale(LC_ALL, "Portuguese");

    char sex;
    float altura, pesoIdeal;
    printf("\nO peso a ser calculado é de um homem ou de uma mulher? (Homem: m, Mulher: f): ");
    scanf("%c", &sex);

    if (sex != 'm' && sex != 'f'){
        printf("Gênero inválido: %c", sex);
    }
    printf("\nEntre com a altura(m): ");
    scanf("%f", &altura);

    if (sex == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else {
        pesoIdeal = (62.1 * altura) - 44.7;
    }

    printf("\nO peso ideial é: %.2f", pesoIdeal);
}
