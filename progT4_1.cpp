/* 
Autor: Franciscomilan
Realizado: 01/02/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa en C que es parte la tarea 4, el programa simula el calculo de 
salarios de trabajadores de una empresa y usuario ingresar los datos, termina cuando 
se introduce un 0 y calcula la media para la materia programacion estructurada
*/

//Librerias
#include<stdio.h>
#include<math.h>
//Principal
int main() {
	//Variables
	float salario=1, suma=0, media;
	int i=1;
	//Procesamiento
	while(salario!=0) {
		//Entrada de datos
		printf("\nIntroduce el salario %d: ",i);
		scanf("%f",&salario);
		suma=suma+salario;
		i++;
	} while(salario!=0);
	media=suma/i;
	//Salida
	printf(" La media es:  %.2f", media);
	//Retorno
	return 0;
}
