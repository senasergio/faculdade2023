#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float peso, altura, imc;


int main() {
	setlocale(LC_ALL, "portuguese");
    printf("Digite o seu peso em KG: ");
    scanf("%f", &peso);

    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC é: %0.2f\n", imc);

    if (imc < 18.5) {
        printf("Você está abaixo do peso.");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Você está com o peso ideal.");
    } else if (imc >= 25 && imc < 30) {
        printf("Você está com sobrepeso.");
    } else {
        printf("Você está obeso.");
    }

    return 0;
}