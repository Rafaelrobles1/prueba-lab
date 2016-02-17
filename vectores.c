#include <stdio.h>


//int main(){



//	int tam;
  //      printf("da el tamaño del vector \n" );

    //	scanf("%d",&tam);

	//int i;
	//int vector[tam];
	//for(i=0;i<tam;i++){
	
	//printf("da el elemento numero  %d :\n",i );

    	//scanf("%d",&vector[i]);
	//printf("%d \n",vector[i]);
	//}

	
	// hola que hace
	//return 0;

//}


#ifndef vector_h
#define vector_h
struct vector{
int size;
int* vector;
};

/*multiplica cada elemento del vector por la constante cons */
struct vector prod_cons_vector(struct vector,int cons);

/*Realiza la suma de los vectores */
struct vector sum_vector(struct vector arr1,struct vector arr2);

/*Calcula el producto punto de ambos vectores */
struct vector sum_point_prod(struct vector arr1,struct vector arr2);

#endif
