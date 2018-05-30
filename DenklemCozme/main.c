#include <stdio.h>

typedef struct{
	float a, b, c;
}ax2bxc;

void denklemCoz(ax2bxc *);

int main(void) {
	ax2bxc Denklem;
	printf("Denklemin a,b,c katsayilarini girin --> ");
	scanf("%f %f %f", Denklem.a, Denklem.b, Denklem.c);
	denklemCoz(&Denklem);
	
	return 0;
}

void denklemCoz(ax2bxc *Denk){
	float disk = (Denk -> b * Denk -> b) - 4 * Denk -> a * Denk -> c;
	if(disk < 0)
		printf("\n\nKokler karmasik sayidir.\n\n");
	else if(disk == 0){
		float x1 =(-1 * Denk -> b + sqrt(disk)) / (2 * Denk -> a); 
		printf("\n\nKatli kokun degeri = %f\'dir.\n", x1);
		}
	else{
			float x1 =(-1 * Denk -> b + sqrt(disk)) / (2 * Denk -> a);
			float x2 =(-1 * Denk -> b - sqrt(disk)) / (2 * Denk -> a);
			printf("\n\nx1\'in  degeri = %f\'dir.\n", x1);
			printf("\n\nx2\'nin degeri = %f\'dir.\n", x2);
		}
}
