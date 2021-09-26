/*
 * funciones.c
 *
 *  Created on: 12 sept 2021
 *      Author: Fede
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float Sumar(float numA, float numB)

{
	float suma;

	suma= numA+numB;

	return suma;
}

float Restar (float numA, float numB)

{
	float resta;

	resta= numA-numB;

	return resta;
}

float Multiplicar (float numA, float numB)

{
	float multiplicacion;

	multiplicacion= numA*numB;

	return multiplicacion;
}

float Dividir (float numA, float numB)

{
	float division;

	division= numA/numB;

	return division;
}

float Factorial(float num)
{

    float fact=0;
    if(num>=0)
    {
    	fact=1;

        for(float i =2 ; i<= num ; i++)
        {
            fact=fact*i;
        }
    }

    return fact;
}


float PedirFlotante(void)
{
		float unFlotante;

		printf("Ingrese un numero:  ");
		scanf("%f",&unFlotante);
		printf("\n");
		return unFlotante;
}


int MostrarMenu ()

{
	int opcion;

		printf ("Menu de opciones: \n\n");
		printf ("1- Ingresar primer operando (A=X): \n");
		printf ("2- Ingresar segundo operando (B=Y): \n");
		printf ("3- Calcular todas las operaciones: \n");
				printf ("         a) Calcular la suma (A+B).\n");
				printf ("         b) Calcular la resta (A-B).\n");
				printf ("         c) Calcular la multiplicacion (A*B).\n");
				printf ("         d) Calcular la division (A/B).\n");
				printf ("         e) Calcular el factorial (A!).\n");
		printf ("4- Informar todos los resultados: \n");
		printf ("5- Salir. \n");
		printf ("\n Indique opcion: \n");
		fflush (stdin);

		scanf("%d", &opcion);

		return opcion;
}
