#include <stdio.h>
#include <locale.h>

void main(void) {
    setlocale(LC_ALL, "Portuguese");
    
    int valor;
    
    printf("Entre com o número: ", valor);
    
    scanf("%i", &valor);
    
    if (valor % 2 == 0) {
    	printf("Este é um número par");
	} else {
		printf("Este é um número impar");
	}
}
