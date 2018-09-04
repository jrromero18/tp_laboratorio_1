#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int main()
{

	  float numeroA;
	  float numeroB;
	  float suma;
      float resta;
      float division;
      float multiplicar;
	  int factorialnumeroA;
	  int factorialnumeroB;
	  int opcion;
	  int flagFin;
	  int flag1;
	  int flag2;
	  int respuestaScanf;

    do
	{
		printf("CALCULADORA\n");
		printf("1- Ingresar 1er operando (A = x)\n");
		printf("2- Ingresar 2do operandon (B = Y)\n");
		printf("3- Calcular todas las operaciones\n");
		printf("4- Informar resultados\n");
		printf("5- salir\n");

		if (scanf("%d",&opcion)== 1)
        {
		switch(opcion)
		{
			case 1:
			printf("Ingresar 1er operando (A) \n");
            respuestaScanf =scanf("%f", &numeroA);
            getchar();

            if (respuestaScanf != 1)
            {
                printf("Error. El operando ingresado no es válido.\n");
            }
            else
            {
                flag1=1;
            }
            printf("A = %f\n", numeroA);
            break;

			case 2:
			printf("Ingresar 2do operando (B) \n");
            respuestaScanf = scanf("%f",&numeroB);
            getchar();

            if (respuestaScanf!= 1)
            {
                printf("Error. El operando ingresado no es válido.\n");
            }
            else
            {
                flag2=1;
            }
            printf("B = %f\n", numeroB);
            break;


			case 3:
			if (flag1 == 1 && flag2 == 1)
			{
                suma = utn_getSuma(numeroA,numeroB);
				resta = utn_getResta(numeroA, numeroB);
				if (numeroB != 0)
                {
                 division = utn_getDividir(numeroA, numeroB);
                }else
                {
                    printf("No se puede dividir por 0 !!\n");
                    break;
                }
				multiplicar = utn_getMultiplicar(numeroA, numeroB);
				factorialnumeroA = utn_getFactorial(numeroA);
				factorialnumeroB = utn_getFactorial(numeroB);
				printf("Se realizaron todas las operaciones presiones 4 para ver los resultados\n");
				break;
			} else
			{
				printf("Debe ingresar los 2 operando para poder calcular\n");
				break;
			}

			case 4:
			if (flag1 == 1 && flag2 == 1)
			{
				printf("El resultado de A+B es: %f\n", suma);
				printf("El resultado de A-B es: %f\n", resta);
				if (numeroB != 0)
				{
					printf("El resultado de A/B es: %f\n", division);
				} else
				{
					printf("No se puede divir por 0 \n");
				}
				 printf("El resultado de A*B es: %f\n", multiplicar);
				 if (numeroA > 1 && numeroB > 1)
				 {
					printf("El factorial de A es: %d y El factorial de B es: %d\n", factorialnumeroA, factorialnumeroB);
				 } else
				 {
					printf("No se puede calcular factorial\n");
				 }
			}else
			{
				printf("Debe ingresar los 2 operando para poder calcular e informar los resultados\n");
			}
			 break;

			 case 5:
			 printf("Salio de la CALCULADORA");
			 return 0;
			 default:
			 printf("Opcion no valida, reingrese una opccion valida (1 al 5)\n");
		}
        }
		flagFin = 1;
	} while (opcion != 5 || flagFin == 1);

  return 0;
}

