/**
*@file HEADLI.h
*@brief Esta es la cabecera que contiene el prototipo de funciones del programa Y  contiene todas las varibles que se utilizaron en probrama
*@par    logica de funciones 
*        - 
*@author Juan Gonzalez IC_301	
*@date   21-12-2020
*/

#ifndef _CABECE_LINEAESPE_
#define _CABECE_LINEAESPE_
#include <stdio.h>
#include <stdlib.h>

int entradaCli[150];//arreglo entrada clientes
int cajas[50];//arreglo cajas
int cap_salidas[100];//arreglo capacidad salidas
int colaespera[100];//arreglo cola de espera
int hr_ini,hr_fin,No_cajas,cap_uni;//@var variables de inicio de hora, fin de hora, No.de cajas,capacidad unitario
int j,f,i, h;//contadores
int out[50];
int output[50];
int aux[50];
/**
* @brief Función void capacidadSal(); se encarga de hacer la operacion para determinar la capacidad de salidas
*@brief void Mostrartab();esta funcion muestra la tabla con los resultados de las operaciones
* @brief void col_Espera();realiza la operacion para obtener la linea de espera
* 
*/
void capacidadSal(int cap_salidas[100], int cajas[50],int cap_uni,int hr_ini,int hr_fin);
void Mostrartab(int hr_ini,int hr_fin,int entradaCli[150], int cajas[50]);
void col_Espera(int cajas[50],int entradaCli[150],int hr_ini,int hr_fin,int cap_uni);
#endif
