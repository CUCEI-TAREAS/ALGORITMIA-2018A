#include <stdio.h>

int divisionRecursiva(int, int, int);

int main(){

	int resultado = divisionRecursiva(9, 3, 0);
	printf("El resultado de la division recursiva es %d", resultado);
	return 0;
}

int divisionRecursiva(int dividendo, int divisor, int resultado){

	if ( dividendo < divisor ){
		return  resultado;
	}
	else {
		return divisionRecursiva(dividendo - divisor, divisor, resultado + 1);
	}
}
