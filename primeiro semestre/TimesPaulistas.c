#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int num;
	
	printf("\n\nTimes Paulista");
	printf("\n\n Digite um número:");
	scanf("%d",&num);
	
	if(num == 1){
		printf("\n\nPalmeiras:Sociedade Esportiva Palmeiras é um clube poliesportivo brasileiro da cidade de São Paulo, capital do estado homônimo. Foi fundado em 26 de agosto de 1914 e suas cores, presentes no escudo e bandeira oficial, são o verde e branco");
		
	}
	else{
		if(num == 2){
			printf("\n\nCorinthians: Sport Club Corinthians Paulista é um clube poliesportivo brasileiro da cidade de São Paulo, capital do estado de São Paulo. Foi fundado como uma equipe de futebol no dia 1 de setembro de 1910 por um grupo de operários do bairro Bom Retiro.");
			
		} else{
			if( num == 3){
				printf("\n\nSão Paulo:São Paulo Futebol Clube é um clube poliesportivo brasileiro da cidade de São Paulo, capital do estado homônimo. Foi fundado em 25 de janeiro de 1930, tendo interrompido suas atividades em maio de 1935, e as retomado em dezembro do mesmo ano." );
				
			} else{
				if(num == 4){
					printf("\n\nSantos: O Santos Futebol Clube, mais conhecido como Santos, é um clube poliesportivo brasileiro, com sede em Santos, é considerado um dos maiores clubes da história do futebol mundial. Foi fundado em 14 de abril de 1912, suas cores iniciais seriam o branco, azul e dourado, mas um ano após a sua fundação, ficou decidido que as cores do clube passariam a ser branco e preto. Manda as suas partidas no Estádio Urbano Caldeira, mais conhecido como Vila Belmiro");
					
				} else{
					printf("Esse número nao há time correspondnete");
				}
			}
		}
		
	}
	return 0;
}