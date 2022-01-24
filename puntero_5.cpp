#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	//RESERVA DINAMICA DE MEMORIA
	char aux[10]; //reservo una palabra auxiliar para guardar de momento la palabra
	int longitud; //Defino el tamano
	char *mispalabras[5];
	int cont;
	for(cont=0;cont<5;cont++){
		//1. Leo el nomre de un rey
		printf("\nDime la palabra %d: ",cont);
		//2, Lo guardo en una variable auxiliar
		scanf("%s",aux);
		//3. Cuento el numero de letras strlen=cuenta las letras en aux
		longitud=strlen(aux);
		//4. Busco en hueco en memoria de este tamaño y me apunto su dirección
		mispalabras[cont]=(char *)malloc(longitud*sizeof(char));
		//5. Copio el nombre desde auxiliar hasta el hueco encontrado
		strcpy(mispalabras[cont],aux);	
	}
	printf("\n LAS CINCO PALABRAS SON: ");
	for(cont=0;cont<5;cont++){
		printf("\n %s",*(mispalabras+cont));
		//SUSTITUYO mispalabras[cont] por *(mispalabras+cont)
		
	} 
	return(0);
	
}
