#include <stdio.h>
#include <stdlib.h>

void main () {
	
	int numero1;
	int numero2;
	int resultado;
	int opcao;
	do{
	printf("digite um numero\n");
    scanf("%d",numero1);
    printf("digite outro numero\n");
    scanf("%d",numero2);
	
	printf ("digite qual operação você quer fazer\n");
	printf("0-voltar");
	printf("1-adição\n");
	printf("2-subtração\n");
	printf("3-multiplicação\n");
	printf("4-divisão\n");
	printf("5-sair");
	scanf("%d"&opcao);
	
	
	switch (opcao) {
		case 1:
			resultado =numero1+numero2;
			printf("Resultado: %d",resultado);
			break;
		case 2:
			resultado=numero1-numero2;
			printf("Resultado:%d",resultado);
			break;
		case 3:
			resultado=numero1*numero2;
			printf("Resultado:%d",resultado);
			break;
		case 4:
			resultado=numero1/numero2;
			printf("resultado:%d",resultado);
			break;
		case 5:
			printf("encerrando o programa");
		break;
}

		printf ("digite qual operação você quer fazer\n");
	printf("0-voltar");
	printf("1-adição\n");
	printf("2-subtração\n");
	printf("3-multiplicação\n");
	printf("4-divisão\n");
	printf("5-sair");
	scanf("%d",&opcao )
	
	}while(opcao==0);
	
}
