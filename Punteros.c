#include "Punteros.h"

void calcularDiaSiguiente(int *dia, int *mes, int*anio) {

	int diasmes = 0;

	if ((*mes) == 2) {
		diasmes = 28;
	}
	else {
		
		if ((*mes) == 4 || (*mes) == 6 || (*mes) == 9 || (*mes) == 11)
		{
		
			//meses de 30 dias abril junio septiembre y noviembre 
			diasmes = 30;
		}
		else
		{
			//el resto tienen 31 dias 
			diasmes = 31;
		}
	}


	if ((*dia) >= diasmes && (*mes) != 12) {
		
		if ((*mes) == 2) {
			if ((*anio) % 4 == 0 && (*anio) % 100 != 0 || (*anio) % 400 == 0){
			(*dia)++;
			}
			else {
				(*mes) += 1;
				(*dia) = 1;
			}
		}else {
			(*mes) += 1;
			(*dia) = 1;
			}
	}else {

		if ((*mes) == 12 && (*dia) == diasmes) {
			(*anio) += 1;
			(*mes) = 1;
			(*dia) = 1;
		}
		else {

			if ((*dia) >= 1 && ((*dia) < 31) && ((*dia) != diasmes)) {
				(*dia) += 1;
			}
			else {
				if ((*mes) >= 1 && (*mes) <= 12 && ((*dia) != diasmes)) {
					(*mes) += 1;
				}
				else {
					if ((*mes) == 12 && (*dia) != diasmes) {
						(*anio) += 1;
					}

				}
			}
		}
	}
	
		

}//main