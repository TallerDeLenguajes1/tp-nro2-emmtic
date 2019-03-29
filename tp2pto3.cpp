#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define DIM1 15


//MAIN----------------------------------------------------
void main(){
	int* matriz, DIM2, f, c, num, contpar;
	int* vecdin;

	srand(time(NULL));
	DIM2=rand()%11+5;

	//matriz con 15 filas y DIM2 columnas
	matriz=(int*)malloc(sizeof(int)*DIM1*DIM2);
	//vectordinamico para guardar cantidad de numeros pares
	vecdin=(int*)malloc(sizeof(int)*DIM1);

	//Cargando la matriz con numeros aleatorios
	for(f=0;f<DIM1;f++){
		for (c=0;c<DIM2;c++){
			*(matriz+(f*DIM2+c))=rand()%900+100;
		}
	}

	//Mostrando matriz
	printf("MATRIZ DE %d FILAS Y %d COLUMNAS:\n", DIM1, DIM2);
	for(f=0;f<DIM1;f++){
		for (c=0;c<DIM2;c++){
			printf("%d ", *(matriz+(f*DIM2+c)));
		}
		printf("\n");
	}

	printf("\n");
	printf("NUMEROS PARES DE CADA FILA: \n");
	//Buscando pares
	for(f=0;f<DIM1;f++){
		contpar=0;
		for (c=0;c<DIM2;c++){
			num=*(matriz+(f*DIM2+c));
			if(num%2==0){
				contpar++;
				printf("%d ",num);
			}
		}
		printf("/ Cantidad de pares en fila %d : %d ",f+1,contpar);
		*(vecdin+f)=contpar;
		printf("\n");
	}

	printf("\nVector dinamico de 15 elementos: ");
	//Mostrando vector dinamico
	for(f=0;f<DIM1;f++){
		printf("%d ", *(vecdin+f));
	}
}