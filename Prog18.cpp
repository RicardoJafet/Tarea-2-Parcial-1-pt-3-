/*Autor: Ricardo Jafet Granados Chable, Realizado: 16/02/2022
	Decimo Octavo programa en C: Grasa corporal.
	*/

#include<stdio.h>

int main(){
	int tipo;
	float peso,antebrazo,cintura,cadera,muneca,grasa,suma,porcentaje;
	printf("¿Cual es tu tipo de sexo? 1. Mujer, 2. Hombre: ");
	scanf("%d", &tipo);
	if(tipo==1){
		printf("--------\n");
		printf("Mujer\n");
		printf("\nPorfavor introduce tu peso: ");
		scanf("%f", &peso);
		printf("\nPorfavor medida de tu antebrazo: ");
		scanf("%f", &antebrazo);
		printf("\nPorfavor introduce medida de tu cintura: ");
		scanf("%f", &cintura);
		printf("\nPorfavor introduce medida de tu cadera: ");
		scanf("%f", &cadera);
		printf("\nPorfavor introduce medida de tu muñeca: ");
		scanf("%f", &muneca);
		peso = (peso*0.732)+8.987;
		muneca = muneca/3.140;
		cintura = cintura*0.157; 
		cadera = cadera*0.249;
		antebrazo = antebrazo*0.434;
		suma = peso + muneca - cintura - cadera + antebrazo; 
		grasa = peso - suma;
		porcentaje = grasa*100/peso; 
		printf("\nEl porcentaje de masa corporal es: %f",porcentaje);
		printf("\n--------");
	}else{
		printf("--------\n");
		printf("Hombre\n");
		printf("\nPorfavor introduce tu peso: ");
		scanf("%f", &peso);
		printf("\nPorfavor introduce medida de tu muñeca: ");
		scanf("%f", &muneca);
		peso = (peso*1.082)+94.42;
		muneca = muneca*4.15;
		suma = peso - muneca;
		grasa = peso - suma;
		porcentaje = grasa*100/peso;
		printf("\nEl porcentaje de masa corporal es: %f",porcentaje);
		printf("\n--------");
	}
	return 0;
}
