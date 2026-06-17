#include <stdio.h>
		int main()
		{
			int numero =0;
			int horas =0;
			float valorhoras =0;
			float salario =0;
			scanf("%d", &numero);
			scanf("%d", &horas);
			scanf("%f", &valorhoras);
			salario = horas * valorhoras;
			 printf("NUMERO = %d\n", numero);
			 printf("SALARIO = %U$ %.2f\n", salario);
			return 0;
		}
