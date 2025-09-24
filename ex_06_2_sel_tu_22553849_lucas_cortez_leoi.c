#include <stdio.h>
#include <locale.h>

void main(void) {
    setlocale(LC_ALL, "Portuguese");
    float valorCompra, valorVenda;
    
    printf("\nValor da compra: ");
    scanf("%f", &valorCompra);
    
    printf("\nValor da venda: ");
    scanf("%f", &valorVenda);
    
    printf("\nValor da compra: %.2f", valorCompra);
    printf("\nValor da venda: %.2f", valorVenda);
    
    if (valorCompra > valorVenda) {
    	printf("\nTeve prejuízo");
	} else if (valorCompra < valorVenda) {
		printf("\nTeve lucro");
	} else {
		printf("\nOs valores são iguais");
	}
}
