#include<stdio.h>

int main(){
	int x[10];
	int cont;
	//for cont in range(1,10);
	for(cont=0;cont<=10;cont++){
		//num=input("Dame un numero: ")
		printf("Dame un numero: ");
		scanf("%d",&x[cont]);
		
	}
	for(cont=0;cont<10;cont++){
		printf("\nx[%d]=%d" ,cont,x[cont]);
	}
	return(0);
	
	
	
}
