#include<stdio.h>

int main(){
	float x[10];
	int cont;
	float suma=0;
	float media;
	//for cont in range(1,10);
	for(cont=0;cont<=10;cont++){
		//num=input("Dame un numero: ")
		printf("Dame un numero: ");
		scanf("%f",&x[cont]);
		
	}
	for(cont=0;cont<10;cont++){
		printf("\nx[%f]=%f" ,cont,x[cont]);
		suma+=x[cont];
		//suma=suma+x[cont];
	}
	media=suma/cont;
	printf("\nLA MEDIA VALE= %f",media);
	
	return(0);
	
	
	
}
