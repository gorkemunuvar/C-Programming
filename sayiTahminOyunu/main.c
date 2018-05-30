#include <stdio.h>
#include <time.h>

int sayiUret(){
	int sayi;
	srand(time(NULL));
	sayi = rand() % 900 + 100;
}

int main(void) {
	int hak = 1, tahmin, sayi, durum = 0;
	sayi = sayiUret();
	
	while(hak <= 15){
		printf("%d. tahmininizi girin -> ", hak);
		scanf("%d", &tahmin);
		
		if(tahmin < sayi)
			printf("\n\nTahmini artir.\n\n\n");
		else if(tahmin > sayi)
			printf("\n\nTahmini azalt.\n\n\n");
		else{durum = 1;	break;}
		hak++;
	}
	
	if(durum == 1)
		printf("\n\nTEBRIKLER. %d. tahminde bildiniz...\n\n", hak);
	else
		printf("\n\nKAZANAMADINIZ.\n\n");
	
	return 0;
}
