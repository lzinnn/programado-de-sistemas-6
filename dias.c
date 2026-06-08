#include<stdio.h>

int main()
{
	int dia = 0;
	printf("farvor informe um numero\n");
	scanf("%d", &dia);
	switch(dia)
	{
		case 1:
			  printf("0 numero iformado represeta janeiro\n");
		break;
		case 2:
			printf("o numero iformado repesenta fevereiro\n");
		case 3:
			  printf("0 numero iformado represeta terca-feira\n");
		break;
		case 4:
			  printf("0 numero iformado represeta quarta-feira\n");
		break;
		case 5:
			  printf("0 numero iformado represeta quita-feira\n");
		break;
		case 6:
			  printf("0 numero iformado represeta sexta-feira\n");
		break;
		case 7:
			  printf("0 numero iformado represeta sabado\n");
		break;
		default:
			  printf(" O numero informado nao representa um dia da semana\n");
	}
	return(0);
}	 