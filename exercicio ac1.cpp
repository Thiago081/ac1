#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {
	int num1, num2;
	float valor1, total;

	
	printf("Menu do cardapio:\n");
	printf("1 - Hamburguer (R$10)\n");
	printf("2 - Pizza (R$15)\n");
	printf("3 - Refrigetante (R$5)\n");
	
	printf("Digite o numero do pedido:\n");
	scanf("%i", &num1);
	fflush(stdin);
	
	switch (num1) {
		case 1: valor1 = 10.0;
		break;
		case 2: valor1 = 15.0;
		break;
		case 3: valor1 = 5.0;
		break;
		default: printf("Opcao invalida\n");
		return 0;
	}
	printf("Qual a quantidade desejada?\n");
	scanf ("%i", &num2);
	
	if (num1 <= 0) {
		printf("Quantidade invalida\n");
		return 0;
		
	
	}
	total = num2 * valor1;
		
	
	if (total > 30) {
		total = total * 0.9;
		printf("Desconto aplicado\n");
		
	}
	
	printf("total a pagar:R$%.2f\n", total);
	
	return 0;
}