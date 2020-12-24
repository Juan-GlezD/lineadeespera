#ifndef _HEAD_QUIUEU_
#define _HEAD_QUIUEU_

#include <stdio.h>
#include <stdlib.h>
int entradaCli[150];//arreglo entrada clientes
int cajas[50];//arreglo cajas
int cap_salidas[100];//arreglo capacidad salidas
int colaespera[100];//arreglo cola de espera
int hr_ini,hr_fin,No_cajas,cap_uni;//variables
int j,f,i,h;//contadores
int out[50];
int output[50];
int aux[50];
int auxi[50];
void capacidadSal(int cap_salidas[100], int cajas[50],int cap_uni,int hr_ini,int hr_fin);
void Mostrartab(int hr_ini,int hr_fin,int entradaCli[150], int cajas[50]);
void col_Espera(int cajas[50],int entradaCli[150],int hr_ini,int hr_fin,int cap_uni);
#endif
