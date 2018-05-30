#include <stdio.h>
#include <time.h>

int sayiUret(int, int);

int main(void) {
	int sayac = 0, tahmin;
	int durum = 0;
	int kucukDeger = 10, buyukDeger = 99;
	
	printf("Aklinizdan iki basamakli bir sayi tutun.\n");
	tahmin = sayiUret(10, 99);
	
	while(durum != 2){
		printf("\n------------------\n");
		printf("Tuttugunuz sayi -> %d\n\n\n", tahmin);
		printf("Tuttugunuz sayi daha buyuk ise --> 0\n");
		printf("Tuttugunuz sayi daha kucuk ise --> 1\n");
		printf("Tuttugunuz sayi dogru ise      --> 2\n");
		scanf("%d", &durum);
		
		if(durum == 0){
			kucukDeger = tahmin;
			tahmin = sayiUret(kucukDeger, buyukDeger);
		}
		else if(durum == 1){
			buyukDeger = tahmin;
			tahmin = sayiUret(kucukDeger, buyukDeger);
		}
		
		sayac++;
	}
	
	printf("\n\nTuttugunuz sayiyi %d adimda buldum.\n\n", sayac);
	
	return 0;
}

int sayiUret(int baslangic, int bitis){
	int sayi;
	srand(time(NULL));
	sayi = rand() % (bitis + 1 - baslangic) + baslangic;
		
	return sayi;
}





