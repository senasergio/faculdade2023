#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Escreva um número para saber se ele é par ou ímpar: ");
	scanf("%d", &num);
	num = num % 2;
	if (num == 0){
		printf("O seu número é par.");
	}
	else {
		printf("O seu número é ímpar.");
	}
}