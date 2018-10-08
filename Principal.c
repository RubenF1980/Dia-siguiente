#include "Principal.h"

int main() {

	int dia = 0;
	int mes = 0;
	int anio = 0;

	do {
		printf("Introduce el dia\n");
		scanf_s("%d", &dia);
	} while (dia <1  || dia >31 );

	do {
		printf("Introduce el mes\n");
		scanf_s("%d", &mes);
	}while (mes < 1 || mes > 12);
	
	do {
		printf("Introduce el anio\n");
		scanf_s("%d", &anio);
	} while (!(anio >= 1900 && anio<= 2500));
	

	calcularDiaSiguiente(&dia,&mes,&anio); //  & direccion de memoria le paso donde estan las variables 
	imprimir(&dia, &mes, &anio);






	return 0;

}

void imprimir(int *dia,int *mes,int *anio) {


	printf("El dia siguiente es %d:%d:%d",*dia,*mes,*anio);




}