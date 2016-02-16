#include <stdio.h>


int main(){



	int tam;
        printf("da el tamaño del vector \n" );

    	scanf("%d",&tam);

	int i;
	int vector[tam];
	for(i=0;i<tam;i++){
	
	printf("da el elemento numero  %d :\n",i );

    	scanf("%d",&vector[i]);
	printf("%d \n",vector[i]);
	}

	
	// hola que hace
	return 0;

}
