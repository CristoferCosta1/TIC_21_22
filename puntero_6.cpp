#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	//RESERVA DINAMICA DE MEMORIA
	char provisional[10];
	char *aux; //reservo una palabra auxiliar para guardar de momento la palabra
	int longitud; //Defino el tamano
	char *mispalabras[5];
	int cont;
	int repetir;
	for(cont=0;cont<5;cont++){
		//1. Leo el nomre de un rey
		printf("\nDime la palabra %d: ",cont);
		//2, Lo guardo en una variable auxiliar
		scanf("%s",provisional);
		//3. Cuento el numero de letras strlen=cuenta las letras en aux
		longitud=strlen(provisional);
		printf("\nMIDE %d",longitud);
		//4. Busco en hueco en memoria de este tamaño y me apunto su dirección
		mispalabras[cont]=(char *)malloc(longitud*sizeof(char));
		//5. Copio el nombre desde auxiliar hasta el hueco encontrado
		strcpy(mispalabras[cont],provisional);	
	}
	printf("\n LAS CINCO PALABRAS SON: ");
	for(cont=0;cont<5;cont++){
		printf("\n %s",*(mispalabras+cont));
		//SUSTITUYO mispalabras[cont] por *(mispalabras+cont)
		
	}
	//LA ORDENO DE MENOR A MAYOR
	for(repetir=1;repetir<5;repetir++){
		for(cont=0;cont<=3;cont++){
			if(strcmp(mispalabras[cont],mispalabras[cont+1])>0){
				aux=mispalabras[cont];
				mispalabras[cont]=mispalabras[cont+1];
				mispalabras[cont+1]=aux;
			}
		}
	} 
	//VUELVO A ORDENAR LAS PALABRAS ORDENADAS
	printf("\n LAS CINCO PALABRAS ORDENADAS SON: ");
	for(cont=0;cont<5;cont++){
		printf("\n %s",*(mispalabras+cont));
	}
	return(0);
	
}
