#include <stdio.h>
#include <math.h>

struct nokta{
	float x;
	float y;
};

typedef struct nokta NOKTA;
float uzaklikHesapla(NOKTA *, int, int);
void uzaklikYaz(NOKTA * ,int);

int main(void) {
	int noktaSayisi;
	
	printf("Nokta sayisini girin -->");
	scanf("%d", &noktaSayisi);	
	
	NOKTA p[noktaSayisi];
	NOKTA *ptr = p;
	int i, j;
	float uzaklik;
	
	for(i=0; i<noktaSayisi; i++){
		printf("%d. Nokta(x , y) --> ", i + 1);
		scanf("%f %f", &(ptr + i)->x, &(ptr + i)->y);
	}

	printf("\n \n");

	uzaklikYaz(ptr, noktaSayisi);	
	
	return 0;
}

float uzaklikHesapla(NOKTA *ref, int i, int j){
	return sqrt(((ref+i)->x - (ref+j)->x) * ((ref+i)->x - (ref+j)->x) + ((ref+i)->y - (ref+j)->y) * ((ref+i)->y - (ref+j)->y));
}

void uzaklikYaz(NOKTA *ref ,int adet){
	int i, j;
	float uzaklik;
	
	for(i=0; i<adet; i++){
		for(j=0; j<adet; j++){
		    if(j <= i)
				printf("       "); 
			else{
				uzaklik = uzaklikHesapla(ref, i, j);
				printf("%.3f  ", uzaklik);
			}
		}
		printf("\n");
	}
}

