#include <stdio.h>

void sirala(int [], int);
void yerDegistir(int *, int *);

int main(void) {
	int i, a[10] = {1, 2, 5, 6, 4, 0, 9, 3, 2, -5};
	sirala(a, 10);
	for(i=0; i<10; i++)
		printf(" %2d \n", a[i]);
		
	return 0;
}

void yerDegistir(int *z1, int *z2){
	int temp = *z2;
	*z2 = *z1;
	*z1 = temp;
}

void sirala(int dizi[], int boyut){
	int i, j;
	for(i=0; i<boyut; i++){
		for(j=i+1; j<boyut; j++){
			if(dizi[i] > dizi[j])
				yerDegistir(&dizi[i], &dizi[j]);
		}
	}
}
