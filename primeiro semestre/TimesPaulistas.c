#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int num;
	
	printf("\n\nTimes Paulista");
	printf("\n\n Digite um n�mero:");
	scanf("%d",&num);
	
	if(num == 1){
		printf("\n\nPalmeiras:Sociedade Esportiva Palmeiras � um clube poliesportivo brasileiro da cidade de S�o Paulo, capital do estado hom�nimo. Foi fundado em 26 de agosto de 1914 e suas cores, presentes no escudo e bandeira oficial, s�o o verde e branco");
		
	}
	else{
		if(num == 2){
			printf("\n\nCorinthians: Sport Club Corinthians Paulista � um clube poliesportivo brasileiro da cidade de S�o Paulo, capital do estado de S�o Paulo. Foi fundado como uma equipe de futebol no dia 1 de setembro de 1910 por um grupo de oper�rios do bairro Bom Retiro.");
			
		} else{
			if( num == 3){
				printf("\n\nS�o Paulo:S�o Paulo Futebol Clube � um clube poliesportivo brasileiro da cidade de S�o Paulo, capital do estado hom�nimo. Foi fundado em 25 de janeiro de 1930, tendo interrompido suas atividades em maio de 1935, e as retomado em dezembro do mesmo ano." );
				
			} else{
				if(num == 4){
					printf("\n\nSantos: O Santos Futebol Clube, mais conhecido como Santos, � um clube poliesportivo brasileiro, com sede em Santos, � considerado um dos maiores clubes da hist�ria do futebol mundial. Foi fundado em 14 de abril de 1912, suas cores iniciais seriam o branco, azul e dourado, mas um ano ap�s a sua funda��o, ficou decidido que as cores do clube passariam a ser branco e preto. Manda as suas partidas no Est�dio Urbano Caldeira, mais conhecido como Vila Belmiro");
					
				} else{
					printf("Esse n�mero nao h� time correspondnete");
				}
			}
		}
		
	}
	return 0;
}