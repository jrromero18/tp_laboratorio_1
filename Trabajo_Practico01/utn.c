#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


/**
*\brief Funcion que suma dos numeros y devuelve el resultado
*\param numeroA es el primer número que ingresa el usuario
*\param numeroB es el segundo número que ingresa el usuario
*\return retorna el resultado de la operación
*/


float utn_getSuma (float numeroA, float numeroB)
{
	float total;
	total = numeroA + numeroB;
	return total;
}

/**
*\brief Funcion que resta dos números y devuelve el resultado
*\param numeroA es el primer número que ingresa el usuario
*\param numeroB es el segundo número que ingresa el usuario
*\return retorna el resultado de la operación
*/


float utn_getResta (float numeroA, float numeroB)
{
	float total;
	total = numeroA - numeroB;
	return total;
}

/**
*\brief  Funcion que multiplica dos números y devuelve el resultado
*\param numeroA es el primer número que ingresa el usuario
*\param numeroB es el segundo número que ingresa el usuario
*\return retorna el resultado de la operación
*/


float utn_getMultiplicar (float numeroA, float numeroB)
{
	float total;
	total = numeroA * numeroB;
	return total;
}

/**
*\brief Funcion que divide dos números y devuelve el resultado
*\param numeroA es el primer número que ingresa el usuario
*\param numeroB es el segundo numero que ingresa el usuario
*\return retorna el resultado de la operación
*/


float utn_getDividir (float numeroA, float numeroB)
{
	float total;
	total = numeroA / numeroB;
	return total;
}

/**
*\brief Funcion  que saca el factorial de un numero
*\param numero es el número que ingresa el usuario
*\param resultado es el factorial de los dos números ingresados por el usuario
*\return retorna el resultado de la operación
*/


int utn_getFactorial(int numero)
{
	int resultad;
	if (numero == 1)
        return 1;
	    resultad = numero* utn_getFactorial(numero-1);
	    return resultad;


}
