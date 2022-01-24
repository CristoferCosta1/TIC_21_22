#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	char provisional[10];
	char *aux; 
	int longitud;
	char *mispalabras[5];
	int cont;
	int repetir;
	for(cont=0;cont<5;cont++){
		//1. Leo el nombre
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
	//LA ORDENO POR TAMAÑO
	for(repetir=1;repetir<5;repetir++){
		for(cont=0;cont<=3;cont++){
			if(strlen(mispalabras[cont])>strlen(mispalabras[cont+1])){
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
