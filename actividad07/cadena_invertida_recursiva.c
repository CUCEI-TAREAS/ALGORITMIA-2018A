#include<string.h>
#include<stdio.h>

void invertirCadena(char[], char[], int, int);

int main(){

	char cadena_original[] = "epileF omall em";
	int numero_caracteres = sizeof(cadena_original) / sizeof(char);

	printf("%s \n", cadena_original);
	printf(" el tamanio del arreglo es de %d elementos\n \n", numero_caracteres);

	char cadena_invertida[numero_caracteres];

	invertirCadena(cadena_original, cadena_invertida, 0, numero_caracteres - 1);

	printf("%s \n", cadena_original);
	printf("%s \n", cadena_invertida);
	return 0;
}

void invertirCadena(char normal[], char invertido[], int pos, int size){

	if(pos == size ){
		invertido[pos] = '\0';
		return;
	} else {
		invertido[size - 1  - pos] = normal[pos];
		invertirCadena(normal, invertido, pos + 1, size);
	}
}
