#include <stdio.h>

int main(){
	float peso, altura, imc;
	
	printf("Qual o seu peso? ");
	scanf("%f", &peso);
	printf("Qual a sua altura(m)? ");
	scanf("%f", &altura);
	
	imc = peso / (altura*altura);
	
	printf("\nSeu IMC é %.2f\n", imc);
	if(imc < 18.5){
	    printf("\nIMC menor que 18.50 \nAbaixo do peso normal.");
	}
	else if(imc < 25){
	    printf("\nIMC entre 18.50 e 24.9 \nPeso Normal.");
	}
	else if(imc < 30){
	    printf("\nIMC entre 25 e 29.9 \nExcesso de Peso.");
	}
	else if(imc < 35){
	    printf("\nIMC entre 30 e 34.9 \nObesidade Classe I.");
	}
	else if(imc < 40){
	    printf("\nIMC entre 35 e 39.9 \nObesidade Classe II.");
	}else{
	    printf("\nIMC maior ou igual a 40 \nObesidade classe III.");
	}
}

