#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float limiteCartao, valor;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Qual o limite dispon�vel no cart�o?");
	scanf("%f", &limiteCartao);
	printf("Qual o valor da compra?");
	scanf("%f", &valor);
	
	if (valor <= limiteCartao){
		limiteCartao = limiteCartao - valor;
		printf("Sua compra foi aprovada! Limite restante: R$%0.2f.", limiteCartao);
	}
	else{
		limiteCartao = valor - limiteCartao;
		printf("Compra recusada. Falta R$%0.2f de limite no seu cart�o.", limiteCartao);
	}
	return 0;
}