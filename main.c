#include <stdio.h>
#include <stdlib.h>

void main () {
	
	int numero1;
	int numero2;
	int resultado;
	int opcao;
	
	printf("digite um numero\n");
    scanf("%d",numero1);
    printf("digite outro numero\n");
    scanf("%d",numero2);
	
	printf ("digite qual opera��o voc� quer fazer\n");
	printf("1-adi��o\n");
	printf("2-subtra��o\n");
	printf("3-multiplica��o\n");
	printf("4-divis�o\n");
	printf("5-sair");
	
	switch (opcao) {
		case 1:
			resultado =numero1+numero2;
			printf("Resultado: %d",resultado);
			break;
		case 2:
			resultado=numero1+numero2;
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
	
	
}
