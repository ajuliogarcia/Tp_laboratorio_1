/*
 * bibliotecaTp1_utn.h
 *
 *  Created on: 15 abr. 2022
 *      Author: Alejandro
 */

#ifndef BIBLIOTECATP1_UTN_H_
#define BIBLIOTECATP1_UTN_H_

#include <stdio.h>
#include <stdlib.h>

int utn_getInt(int * pNumeroIngresado,char * mensaje,char * mensajeError,int minimo, int maximo, int maximoDeReintentos);
int utn_getFloat(float * pNumeroIngresado,char * mensaje,char * mensajeError,float minimo, float maximo, int maximoDeReintentos);
float calcularDebito(float precioVuelo, float descuentoVuelo);
float calcularCredito(float precioVuelo, float interesVuelo);
float calcularBitcoin(float precioVuelo, float bitcoinVuelo);
float calcularPrecioUnitario(float precioKilometros, float precioUnitarioKilometros);
float calcularDiferenciaDePrecio(float diferenciaPrecioAerolineas, float diferenciaPrecioLatam);


#endif /* BIBLIOTECATP1_UTN_H_ */
