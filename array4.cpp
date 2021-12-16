#include<stdio.h>

int main(){
	char letras[5];
	int cont;

	
	//Leo datos del teclado
	for(cont=0;cont<5;cont++){
		//num=input("Dame un numero: ")
		printf("Introduce la letra %d: ",cont);
		scanf(" %c",&letras[cont]);
		
	}
	//ESCRIBO DATOS EN LA PANTALLA
	printf("\nHAS ESCRITO LA PALABRA: ");
	for(cont=0;cont<5;cont++){
		printf("%c",letras[cont]);


	}
	printf("\n");
	//ESCRIBO LA PALABRA AL REVÉS
	for (cont=4;cont>=0;cont--){
		printf("%c",letras[cont]);
		
	}

	
	return(0);
	
	
	
}
