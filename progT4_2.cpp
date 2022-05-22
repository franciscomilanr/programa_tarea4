/* 
Autor: Franciscomilan
Realizado: 01/02/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa en C que es parte de la tarea 4, el programa le varias temmperaturas 
en grados °C y los transforma a °F, el programa termina cuando se introduce una temperatura 
de 999 para la materia programacion estructurada
*/

//Librerias
#include<stdio.h>
#include<math.h>
//Principal
int main() {
	//Variables
	float F, C;
  	int i=0;
	//Do
  	do{
		//Entrada de datos
		printf("\nIntriduce la temperatura en °c :  ");
		scanf("%f",&C);
	//If 
	if (C>=0) {
		//Convertir
		F=(9/5.0*C)+32;
		}
	else if (C>=998) {
		printf(" Termino el programa ");
   	 break;
		}
   	 i++;
 	 } while (C<=100);
	//Salida de datos
	printf(" La temperatura %i en °F es  %.2f",i, F);
	//Retorno
	return 0;
 }
