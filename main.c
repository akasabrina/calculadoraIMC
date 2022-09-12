#include <stdio.h>

/* Funções */
float calculoIMC(void){
    float peso, altura, imc;
    printf("\n*************************************************");
    printf("\n\nQual o seu peso? ");
    scanf("%f", &peso);
    printf("Qual a sua altura(m)? ");
    scanf("%f", &altura);

    imc = peso / (altura*altura);
    return(imc);
}

int infor(float imc){
    int flag;
    
    printf("\nSeu IMC é %.2f\n", imc);
        if(imc < 18.5){
            printf("\nIMC menor que 18.50 \nAbaixo do peso normal.");
        	printf("\n\nCalcular novamente? (1-sim/2-nao): ");
        	scanf("%d",&flag);
        }
        else if(imc < 25){
        	printf("\nIMC entre 18.50 e 24.9 \nPeso Normal.");
        	printf("\n\nCalcular novamente? (1-sim/2-nao): ");
        	scanf("%d",&flag);
        }
        else if(imc < 30){
        	printf("\nIMC entre 25 e 29.9 \nExcesso de Peso.");
        	printf("\n\nCalcular novamente? (1-sim/2-nao): ");
        	scanf("%d",&flag);
        }
        else if(imc < 35){
        	printf("\nIMC entre 30 e 34.9 \nObesidade Classe I.");
        	printf("\n\nCalcular novamente? (1-sim/2-nao): ");
        	scanf("%d",&flag);
        }
        else if(imc < 40){
        	printf("\nIMC entre 35 e 39.9 \nObesidade Classe II.");
        	printf("\n\nCalcular novamente? (1-sim/2-nao): ");
        	scanf("%d",&flag);
        }else{
        	printf("\nIMC maior ou igual a 40 \nObesidade classe III.");
        	printf("\n\nCalcular novamente? (1-sim/2-nao): ");
        	scanf("%d",&flag);
        }return(flag);
}

/* Main */
int main(){
    float imc;
	int flag= 1;
	
    while (flag == 1){
        imc = calculoIMC();
        	
        flag = infor(imc);
    }
}
