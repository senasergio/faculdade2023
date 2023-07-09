#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

char nomeCliente[0], *nomeDoce;
int doce;
float kg, kgTotal, precoTotal, precoFinal, precoDoce, precoKgDoce;
float p1Doce1 = 25.00, p2Doce1 = 22.00, p1Doce2 = 24.45, p2Doce2 = 22.25, p1Doce3 = 35.00, p2Doce3 = 30.00, p1Doce4 = 38.50, p2Doce4 = 36.20; // P = preço

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Qual o nome do cliente?: ");
	gets(nomeCliente);
	printf("Seja bem-vindo, %s!", nomeCliente);
	printf("\n___________________________________");
	printf("\n|Cardápio confeitaria Sugar Flower|");
	printf("\n-----------------------------------");
	printf("\nLeve mais de 5Kg e ganhe um desconto!");
	printf("\n________________________________________________________________________________________________________");
	printf("\n|Doce:                                    |         Valor(Kg) até 5Kg:     |    Valor(Kg) acima de 5Kg:|");
	printf("\n|------------------------------------------------------------------------------------------------------|");
	printf("\n|1 - Trufa de nozes com chocolate         |              R$25,00           |            R$22,00        |");
	printf("\n|2 - Torta de mousse de limão             |              R$24,45           |            R$22,25        |");
	printf("\n|3 - Bolo de brigadeiro                   |              R$35,00           |            R$30,00        |");
	printf("\n|4 - Bolo de cookie de Nutella            |              R$38,50           |            R$36,20        |");
	printf("\n--------------------------------------------------------------------------------------------------------");
	printf("\nSelecione qual o doce: \n");
	scanf("%d", &doce);
	printf("\n");
	switch(doce){
		case 1:
			printf("\nTrufa de nozes com chocolate escolhido.");
			printf("\nQuantos Kg no total?: ");
			scanf("%f", &kg);
			if (kg < 5.00){
				printf("Menos que 5Kg, a promoção não foi aplicada.");
				precoKgDoce = p1Doce1;
				precoTotal = kg * p1Doce1;
				nomeDoce = "Trufa de Nozes com chocolate";
			}
			else{
				printf("Mais que 5Kg. Promoção aplicada!");	
				precoKgDoce = p2Doce1;
				precoTotal = kg * p2Doce1;
				nomeDoce = "Trufa de nozes com chocolate";
			}
			break;
		case 2:
			printf("Torta de mousse de limão escolhido.");
			printf("\nQuantos Kg no total?: ");
			scanf("%f", &kg);
			if (kg < 5.00){
				printf("Menos que 5Kg, a promoção não foi aplicada.");
				precoKgDoce = p1Doce2;
				precoTotal = kg * p1Doce2;
				nomeDoce = "Torta de mousse de limão";
				
			}
			else{
				printf("Mais que 5Kg. Promoção aplicada!");	
				precoKgDoce = p2Doce2;
				precoTotal = kg * p2Doce2;
				nomeDoce = "Torta de mousse de limão";
			}
			break;
		case 3:
			printf("Bolo de brigadeiro escolhido.");
			printf("\nQuantos Kg no total?: ");
			scanf("%f", &kg);
			if (kg < 5.00){
				printf("Menos que 5Kg, a promoção não foi aplicada.");
				precoKgDoce = p1Doce3;
				precoTotal = kg * p1Doce3;
				nomeDoce = "Bolo de brigadeiro";
			}
			else{
				printf("Mais que 5Kg. Promoção aplicada!");	
				precoKgDoce = p2Doce3;
				precoTotal = kg * p2Doce3;
				nomeDoce = "Bolo de brigadeiro";
			}
			break;
		case 4:
			printf("Bolo de Cookie de Nutella escolhido.");
			printf("\nQuantos Kg no total?: ");
			scanf("%f", &kg);
			if (kg < 5.00){
				printf("Menos que 5Kg, a promoção não foi aplicada.");
				precoKgDoce = p1Doce4;
				precoTotal = kg * p1Doce4;
				nomeDoce = "Bolo de cookie de Nutella";
			}
			else{
			printf("Mais que 5Kg. Promoção aplicada!");	
			precoKgDoce = p2Doce4;
				precoTotal = kg * p2Doce4;
				nomeDoce = "Bolo de cookie de Nutella";
			}
			break;
			
	}
	printf("\n\n\nResumo do pedido de %s: ", nomeCliente);
	printf("\n\n-Tipo do doce: %d.\n-Nome do doce: %s.\n-Quantidade em Kg: %0.2fKg.\n-Preço do Kg: R$%0.2f.\n\n-Valor total: R$%0.2f.\n\nObrigado e volte sempre!\n", doce, nomeDoce, kg, precoKgDoce, precoTotal);
	system("pause");
	return 0;
}