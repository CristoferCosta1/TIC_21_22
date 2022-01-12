#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	//RESERVA DINAMICA DE MEMORIA
	char aux[100]; //reservo una palabra auxiliar para guardar de momento la palabra
	int longitud; //Defino el tamano
	printf("\nDime una palabra: ");
	scanf("%s",aux); //leo la palabra y la guardo en aux
	longitud= strlen(aux);
	char *palabra; //palabra es un puntero(una variabl que contiene
	//dirección de memoria de algo que es una letra
	palabra=(char*) malloc(longitud*sizeof(char)); //memory allocation
	strcpy(palabra,aux);
	printf("\nRESULTADO: ");
	printf("%s",palabra);
	return(0);
	
}
