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

    printf("Seu IMC �: %0.2f\n", imc);

    if (imc < 18.5) {
        printf("Voc� est� abaixo do peso.");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Voc� est� com o peso ideal.");
    } else if (imc >= 25 && imc < 30) {
        printf("Voc� est� com sobrepeso.");
    } else {
        printf("Voc� est� obeso.");
    }

    return 0;
}