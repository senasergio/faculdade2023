#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Escreva um n�mero para saber se ele � par ou �mpar: ");
	scanf("%d", &num);
	num = num % 2;
	if (num == 0){
		printf("O seu n�mero � par.");
	}
	else {
		printf("O seu n�mero � �mpar.");
	}
}