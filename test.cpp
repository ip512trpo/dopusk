#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include "h.h"
#include "disc.cpp"


int main()
{	
	float i, j, k, x1, x2;
	float min = 1, max = 50;
	FILE* discOut = fopen("disc.txt", "w");
	for(i = min; i<max; i++){
		for(j = min; j<max; j++){
			for(k = min; k<max; k++){
				
		fprintf(discOut, "a = %.0f, b = %0.f, c = %0.f, D = %.3f", i, j, k, disc(i, j, k));
		
				if(disc(i, j, k) < 0)
		{ 
			fprintf(discOut, "  Discriminant less than zero"); 
		}
		
		else
		{
		x1 = (-j-sqrt(disc(i, j, k)))/(2*i);
		x2 = (-j+sqrt(disc(i, j, k)))/(2*i);
		if(i*(x1*x1)+j*x1+k > i*(x2*x2)+j*x2+k -0.0001 || i*(x1*x1)+j*x1+k < i*(x2*x2)+j*x2+k + 0.0001  )
			fprintf(discOut, " %0.f*(%0.f^2) + %0.f*(%0.f) + %0.f = %0.f*%0.f^2 + %0.f*%0.f + k = 0", i, x1, j, x1, k, i, x2, j, x2, k);
		}
		fprintf(discOut, "\n");
			
			}
		}
	}
	fclose(discOut);
	printf("Done");
	return 154;
}
