/*
 ============================================================================
 Name        : TP_1.c
 Author      : Alejandro Julio Garcia
 Division    : 1 "E" Turno Noche
 Profesores  : Gastón Argibay y Camila Guerrero
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaTp1_utn.h"

int main(void) {
	setbuf(stdout, NULL);

	int retorno;
	int kmTotales;
	float precioAerolineas;
	float precioLatam;
	int opcionMenu;
	int validacionRetorno;
	float debitoA;
	float creditoA;
	float bitcoinA;
	float precioUnitarioA;
	float debitoL;
	float creditoL;
	float bitcoinL;
	float precioUnitarioL;
	float diferenciaDePrecio;

	retorno = -1;
	kmTotales = 0;
	precioAerolineas = 0;
	precioLatam = 0;


	do {
		printf("\n1. Ingresar kilómetros (km = %d)\n", kmTotales);
		printf("\n2. Ingresar precio de vuelos (Aerolíneas Argentinas = $%.2f, Latam = $%.2f)\n", precioAerolineas, precioLatam);
		printf("\n3. Calcular todos los costos:");
		printf("\n   a) Tarjeta de débito (10%% de descuento)");
		printf("\n   b) Tarjeta de crédito (25%% de interés)");
		printf("\n   c) Bitcoin (1 BTC => 4606954,55 pesos argentinos)");
		printf("\n   d) Precio por kilómetro precio unitario)");
		printf("\n   e) Diferencia de precios ingresados (Latam - Aerolineas Argentinas)\n");
		printf("\n4. Informar los resultados\n");
		printf("\n5. Carga forzada de datos\n");
		printf("\n6. Salir\n");

		validacionRetorno = utn_getInt(&opcionMenu, "\nIngrese una opción: ", "\nError: La opción ingresada es inválida", 1, 6,1);
		printf("%d", validacionRetorno);
		if(validacionRetorno == 0) {
			switch(opcionMenu) {
			     case 1:
		validacionRetorno = utn_getInt(&kmTotales,"Ingrese la cantidad de kilometros:\n","La cantidad de kilometros es incorrecta:\n",1,20000,2);
		if(validacionRetorno == 0){
									printf("%d", kmTotales);
								}else{
									printf("Los kilometros no fueron bien ingresados\n");
								}
							break;
				 case 2:
					do {
						printf("\n1. Ingresar precio de vuelo de Aerolíneas Argentinas");
						printf("\n2. Ingresar precio de vuelo de Latam\n");
						printf("\n3. Volver al menú principal\n");

	                    validacionRetorno = utn_getInt(&opcionMenu, "\nIngrese una opción: ", "\nError: la opción ingresada es inválida", 1, 3,1);
	                    if(validacionRetorno == 0) {
							switch(opcionMenu) {
								case 1:
									validacionRetorno = utn_getFloat(&precioAerolineas,"Ingrese precio de vuelo de Aerolineas:\n","El precio de vuelo es incorrecto:\n",1,150000,2);
									if(validacionRetorno == 0){
										printf("%f", precioAerolineas);
									}else{
										printf("El precio de Aerolineas no fue bien ingresado\n");
									}
									break;
								case 2:
									validacionRetorno = utn_getFloat(&precioLatam,"Ingrese precio de vuelo de Latam:\n","El precio de vuelo es incorrecto:\n",1,150000,2);
									if(validacionRetorno == 0){
										printf("%f", precioLatam);
									}else{
										printf("El precio de Latam no fue bien ingresado\n");
									}
									break;

								case 3:
							            printf("Volver al menú principal.\n");
									break;
							       }
						           }else{
							            printf("\nError: la función utn_getFloat falló");
							       break;
						           }
					} while(opcionMenu != 3);
					                break;
				case 3:
		            debitoA = calcularDebito(precioAerolineas,0.10);
		            debitoL = calcularDebito(precioLatam,0.10);
		            creditoA = calcularCredito(precioAerolineas,1.25);
		            creditoL = calcularCredito(precioLatam,1.25);
		            bitcoinA = calcularBitcoin(precioAerolineas, 4606954.55);
		            bitcoinL = calcularBitcoin(precioLatam, 4606954.55);
		            precioUnitarioA = calcularPrecioUnitario(precioAerolineas, kmTotales);
		            precioUnitarioL = calcularPrecioUnitario(precioAerolineas, kmTotales);
		            diferenciaDePrecio = calcularDiferenciaDePrecio(precioAerolineas,precioLatam);


					break;
				case 4:
					printf("Los kilometros ingresados son: %d", kmTotales);

					printf("Aerolineas Argentinas: \n Precio con tajeta de Debito es: $ %.2f\n",debitoA);
					printf("\nPrecio con Tarjeta de crédito es:$ %.2f\n",creditoA);
					printf("\nPrecio pagando con bitcoin es:$ %.8f\n",bitcoinA);
					printf("\nPrecio por kilometro de Aerolineas Argentina es:$ %.2f\n",precioUnitarioA);

					printf("Latam: \n Precio con tajeta de Debito es: $ %.2f\n",debitoL);
					printf("\nPrecio con Tarjeta de crédito es:$ %.2f\n",creditoL);
					printf("\nPrecio pagando con bitcoin es:$ %.8f\n",bitcoinL);
					printf("\nPrecio por kilometro de Latam es:$ %.2f\n",precioUnitarioL);

					printf("La diferencia de precio es: $%.2f", diferenciaDePrecio);

					break;

				case 5:
					kmTotales = 7090;
					precioAerolineas = 162965;
					precioLatam = 159339;

					debitoA = calcularDebito(precioAerolineas,0.10);
				    debitoL = calcularDebito(precioLatam,0.10);
				    creditoA = calcularCredito(precioAerolineas,1.25);
				    creditoL = calcularCredito(precioLatam,1.25);
					bitcoinA = calcularBitcoin(precioAerolineas, 4606954.55);
					bitcoinL = calcularBitcoin(precioLatam, 4606954.55);
				    precioUnitarioA = calcularPrecioUnitario(precioAerolineas, kmTotales);
					precioUnitarioL = calcularPrecioUnitario(precioAerolineas, kmTotales);
					diferenciaDePrecio = calcularDiferenciaDePrecio(precioAerolineas,precioLatam);

					printf("Los kilometros ingresados son: %d", kmTotales);

					printf("Aerolineas Argentinas: \n Precio con tajeta de Debito es: $ %.2f\n",debitoA);
					printf("\nPrecio con Tarjeta de crédito es:$ %.2f\n",creditoA);
					printf("\nPrecio pagando con bitcoin es:$ %.8f\n",bitcoinA);
					printf("\nPrecio por kilometro de Aerolineas Argentina es:$ %.2f\n",precioUnitarioA);

					printf("Latam: \n Precio con tajeta de Debito es: $ %.2f\n",debitoL);
					printf("\nPrecio con Tarjeta de crédito es:$ %.2f\n",creditoL);
					printf("\nPrecio pagando con bitcoin es:$ %.8f\n",bitcoinL);
					printf("\nPrecio por kilometro de Latam es:$ %.2f\n",precioUnitarioL);

				    printf("La diferencia de precio es: $%.2f", diferenciaDePrecio);


					break;

				case 6:
					printf("Volver al menú principal.\n");
					retorno = 0;
					break;
			       }
		           }else{
			        printf("\nError: la función utn_getInt falló");
			        break;
		}
	} while(opcionMenu != 6);

	return retorno;
}


