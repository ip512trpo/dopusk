#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // getch()
#include <math.h>
#include <windows.h>
//#include "h.h"
#include "disc.cpp"


int main()
{
	float i, j, k;
	float min = 1, max = 50;
	FILE* discOut = fopen("disc.txt", "w");
	for(i = min; i<max; i++){
		for(j = min; j<max; j++){
			for(k = min; k<max; k++){
		fprintf(discOut, "a = %.0f, b = %0.f, c = %0.f, D = %.3f", i, j, k, disc(i, j, k));
		if(disc(i, j, k) < 0)
			fprintf(discOut, "  Discriminant less than zero");
		fprintf(discOut, "\n");
			}
		}
	}
	fclose(discOut);
	printf("Done");
	return 0;
}
