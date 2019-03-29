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

	srand(time(NULL));


	for(f=0;f<N;f++){
		for(c=0;c<M;c++){
			mt[f][c]=rand()%100;
			printf("%.1f ",mt[f][c]);
		}
		printf("\n");
	}
}