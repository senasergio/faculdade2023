#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidadeMelancia;
    float preco, valorFinal;
			printf("***VENDAS DE MELANCIA****");
    printf("\n\nDigite a quantidade de melancias: ");
    scanf("%d", &quantidadeMelancia);

    if (quantidadeMelancia <= 10) {
        preco = 2.40;
    } 
	else {
        preco = 3.0;
    }

    valorFinal = quantidadeMelancia * preco;

    printf("\n\nValor final a pagar: R$%.2f\n", valorFinal);
    return 0;
}