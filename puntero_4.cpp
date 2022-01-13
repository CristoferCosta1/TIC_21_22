#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	//RESERVA DINAMICA DE MEMORIA
	char aux[10]; //reservo una palabra auxiliar para guardar de momento la palabra
	int longitud; //Defino el tamano
	char *lista[3];
	int cont;
	for(cont=0;cont<3;cont++){
		//1. Leo el nomre de un rey
		printf("\nDime el nombre del rey %d: ",cont);
		//2, Lo guardo en una variable auxiliar
		scanf("%s",aux);
		//3. Cuento el numero de letras strlen=cuenta las letras en aux
		longitud=strlen(aux);
		//4. Busco en hueco en memoria de este tamaño y me apunto su dirección
		lista[cont]=(char *)malloc(longitud*sizeof(char));
		//5. Copio el nombre desde auxiliar hasta el hueco encontrado
		strcpy(lista[cont],aux);	
	}
	printf("\n LOS TRES REYES MAGOS SON: ");
	for(cont=0;cont<3;cont++){
		printf("\n %s",lista[cont]);
		
	} 
	return(0);
	
}
