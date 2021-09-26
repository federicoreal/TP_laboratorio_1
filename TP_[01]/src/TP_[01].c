/*
 ============================================================================
 Name        : A.c
 Author      : Federico Real- Div G
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void)
{
	setbuf(stdout,NULL);

	float operadorA, operadorB;
	float suma, resta, multiplicacion, division;
	float factorialA, factorialB;
	int opcion=0;
	int flag1,flag2,flag3;
	char continuar= 's';

	do{
		switch (MostrarMenu())
		{
			case 1:
				operadorA= PedirFlotante();

				break;

			case 2:
				operadorB= PedirFlotante();
				break;

			case 3:
				suma= Sumar(operadorA,operadorB);
				resta= Restar(operadorA,operadorB);
				multiplicacion= Multiplicar(operadorA,operadorB);
				division= Dividir(operadorA,operadorB);
				factorialA= Factorial(operadorA);
				factorialB= Factorial(operadorB);
				break;

			case 4:
				printf("El resultado de %f+%f es: %f \n", operadorA,operadorB,suma);
				printf("El resultado de %f-%f es: %f \n", operadorA,operadorB,resta);
				printf("El resultado de %f*%f es: %f \n", operadorA,operadorB,multiplicacion);
				printf("El resultado de %f/%f es: %f \n", operadorA,operadorB,division);
				printf("El resultado de %f! es: %f \n", operadorA,factorialA);
				printf("El resultado de %f! es: %f \n", operadorB,factorialB);
				break;


			case 5:
				continuar = 'n';
				break;

			default:
				printf ("Error. Ingrese una opcion correcta. \n");
				system("pause");
		}

	}while (continuar == 's');


return EXIT_SUCCESS;
}
