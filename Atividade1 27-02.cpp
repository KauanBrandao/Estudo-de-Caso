#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <stdlib.h>


int main () { 
	setlocale(LC_ALL, "Portuguese");
	
	int nCamisasVendidas;
	float precoCamiseta, lucroGerado, desconto, custoProducaoCamiseta, descontoTotal, valorFinal;
	
	
	printf("Informe o número de camisetas vendidas: ");
	scanf("%d", &nCamisasVendidas);
	
	printf("\nInforme o preço de venda da camiseta: ");
	scanf("%f", &precoCamiseta);
	
	printf("\nInforme o desconto aplicado: ");
	scanf("%f", &desconto);
	
	printf("\nInforme o custo por camiseta produzida: ");
	scanf("%f", &custoProducaoCamiseta);
	
	
	valorFinal = (nCamisasVendidas * precoCamiseta);
	
	descontoTotal = desconto/100 * valorFinal;
	
	lucroGerado = (nCamisasVendidas * precoCamiseta) - custoProducaoCamiseta * nCamisasVendidas - descontoTotal;
	
	system("cls");
	fflush(stdin);
	
	
	printf("\nNúmero de camisetas vendidas: %d", nCamisasVendidas);
	
	printf("\nPreço de venda da camiseta: %.2f", precoCamiseta);
	
	printf("\nDesconto aplicado: %.2f", desconto);
	
	printf("\nCusto por camiseta produzido: %.2f", custoProducaoCamiseta);
	
	printf("\nLucro gerado: %f", lucroGerado);
	
}












