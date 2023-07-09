#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int numAleatorio, numUsuario, tentativas;
int main(){
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	numAleatorio = rand() % 100;
	printf("%d", numAleatorio);
	do {
		printf("Digite um palpite: \n");
		scanf("%d", &numUsuario);
		
		tentativas++;
		
		if (numUsuario > numAleatorio){
			printf("O número é menor.\n");
		}
		else if (numUsuario < numAleatorio){
			printf("O número é maior.\n");
		}
		else{
			printf("Boa carai! Acertou com %d tentativa(s)!", tentativas);
		}
	} while (numUsuario != numAleatorio);
	printf(" Você é foda!");
	return 0;
}