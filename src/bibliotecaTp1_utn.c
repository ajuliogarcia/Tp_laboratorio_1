/*
 * bibliotecaTp1_utn.c
 *
 *  Created on: 15 abr. 2022
 *      Author: Alejandro
 */
#include "bibliotecaTp1_utn.h"


/**
 * @author Alejandro
 * @param pNumeroIngresado es un par�metro, un puntero a entero, por pasaje de par�metro por referencia.
 * @variable retorno es una variable dentro de la funci�n que nos va a devolver por medio de negativos (-1), errores en la funci�n misma y cero (0) en el caso de haya cumplido el cometido.
 * @param mensaje muestra el mensaje cuando la funci�n se ejecuta correctamente.
 * @param mensajeError muestra el mensaje de error cuando la funci�n se ejecuta incorrectamente o lo que se ingres� es inv�lido.
 * @param minimo, es aquel parametro por el cu�l se determina un m�nimo de algo, por ejemplo el 1 de la opci�n. El m�nimo no puede ser mayor al m�ximo.
 * @param maximo, es aquel parametro por el cu�l se determina un maximo de algo, por ejemplo el 6 de la opci�n. El m�ximo no puede ser menor al m�nimo.
 * @param maximoDeReintentos, es aquel parametro que determina que no se puede exceder una cantidad determinada de reintentos.
 * @param cualquier funci�n que este recibiendo como parametro un puntero, hace una validaci�n que se pregunta si el puntero en este caso pNumeroIngresado es distinto de Null. Es decir si me pasaron una direcci�n de memoria. Null es que no me pasaron nada.
 * @variable La �ltima l�nea de la funci�n contiene una instrucci�n return que lo que hace es terminar la funci�n y devolver el valor que tiene la variable retorno.
 */
int utn_getInt(int * pNumeroIngresado,char * mensaje,char * mensajeError,int minimo, int maximo, int maximoDeReintentos){


	int auxNumeroIngresado;
	int retorno;
	retorno = -1;

	if(pNumeroIngresado != NULL && maximo >= minimo && maximoDeReintentos>= 0){
		do{
			printf("%s", mensaje);
			scanf("%d", &auxNumeroIngresado);
			maximoDeReintentos--;

			if(auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo){
						*pNumeroIngresado = auxNumeroIngresado;
						retorno = 0;
						break;
			}else{
				printf("%s", mensajeError);
			}

		}while(maximoDeReintentos > 0);
	}

	return retorno;
}

/**
 * @author Alejandro
 * @param pNumeroIngresado es un par�metro, un puntero a flotante, por pasaje de par�metro por referencia. A la funci�n se le pasa como par�metro actual la
direcci�n de memoria de una variable.
 * @variable retorno es una variable dentro de la funci�n que nos va a devolver por medio de negativos (-1), errores en la funci�n misma y cero (0) en el caso de haya cumplido el cometido.
 * @param mensaje muestra el mensaje cuando la funci�n se ejecuta correctamente.
 * @param mensajeError muestra el mensaje de error cuando la funci�n se ejecuta incorrectamente o lo que se ingres� es inv�lido.
 * @param minimo, es aquel parametro por el cu�l se determina un m�nimo de algo, por ejemplo el 1 de la opci�n.
 * @param maximo, es aquel parametro por el cu�l se determina un maximo de algo, por ejemplo el 6 de la opci�n.
 * @param maximoDeReintentos, es aquel parametro que determina que no se puede exceder una cantidad determinada de reintentos.
 * @param cualquier funci�n que este recibiendo como parametro un puntero, hace una validaci�n que se pregunta si el puntero en este caso pNumeroIngresado es distinto de Null. Es decir si me pasaron una direcci�n de memoria. Null es que no me pasaron nada.
 * @variable La �ltima l�nea de la funci�n contiene una instrucci�n return que lo que hace es terminar la funci�n y devolver el valor que tiene la variable retorno.
 */
int utn_getFloat(float * pNumeroIngresado,char * mensaje,char * mensajeError,float minimo, float maximo, int maximoDeReintentos){

	float auxNumeroIngresado;
	int retorno;
	retorno = -1;

	if(pNumeroIngresado != NULL && maximo >= minimo && maximoDeReintentos>= 0){
		do{
			printf("%s", mensaje);
			scanf("%f", &auxNumeroIngresado);
			maximoDeReintentos--;

			if(auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo){
						*pNumeroIngresado = auxNumeroIngresado;
						retorno = 0;
						break;
			}else{
				printf("%s", mensajeError);
			}

		}while(maximoDeReintentos > 0);
	}

	return retorno;
}

/**
@author Alejandro
@param precioVuelo es un par�metro flotante, por pasaje de par�metro por valor. La funci�n se le pasa como par�metro actual el valor de la
variable.
@variable La �ltima l�nea de la funci�n contiene una instrucci�n return que lo que hace es terminar la funci�n y devolver el valor que tiene la variable auxPrecioFinal.
*/
float calcularDebito(float precioVuelo, float descuentoVuelo){
	float auxPrecioFinal;

	auxPrecioFinal = precioVuelo * descuentoVuelo;

	return auxPrecioFinal;

}


float calcularCredito(float precioVuelo, float interesVuelo){
	float auxPrecioFinal;

	auxPrecioFinal = precioVuelo * interesVuelo;

	return auxPrecioFinal;

}


float calcularBitcoin(float precioBitcoinVuelo, float bitcoinVuelo){
	float auxPrecioFinal;

	auxPrecioFinal = precioBitcoinVuelo / bitcoinVuelo;

	return auxPrecioFinal;

}

float calcularPrecioUnitario(float precioKilometros, float precioUnitarioKilometros){
	float auxPrecioFinal;

	auxPrecioFinal = precioKilometros / precioUnitarioKilometros;

	return auxPrecioFinal;

}

float calcularDiferenciaDePrecio(float diferenciaPrecioAerolineas, float diferenciaPrecioLatam){
	float auxPrecioFinal;

	auxPrecioFinal = diferenciaPrecioAerolineas - diferenciaPrecioLatam;

	return auxPrecioFinal;

}


