#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 4
#define M 5

//MAIN---------------------------------------------------
void main(){
	int f, c;
	double mt[N][M];
	double* puntmt;
	puntmt=&mt[0][0];
	
	srand(time(NULL));

	for(f=0;f<N;f++){
		for(c=0;c<M;c++){
			
			*(puntmt+(f*M+c))=rand()%100;
			printf("%.1f ",*(puntmt+(f*M+c)));
			//printf("%d/",puntmt+(f*M+c)); //Para probar que apuntan a la misma direccion
			//printf("%d ",&mt[f][c]);

		}
		printf("\n");
	}


}