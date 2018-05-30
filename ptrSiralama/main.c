#include <stdio.h>

void sirala(int[], int, char); //char -> küçükten büyüðe ya da büyükten küçüðe
void yerDegistir(int *, int *);

int main(int argc, char *argv[]) {
	int boyut;
	printf("Olusturulacak sayi dizisinin boyutunu girin -> ");
	scanf("%d", &boyut);
	
	int i, secim, sayilar[boyut];
	
	for(i=0; i<boyut; i++){
		printf("%d. degeri girin -> ", i + 1);
		scanf("%d", &sayilar[i]);
	}
	
	printf("\nLutfen 0 ve 1 arasinda bir secim yapin.\n");
	printf("1 --> Sayilari kucukten buyuge siralar.\n");	
	printf("0 --> Sayilari buyukten kucuge siralar.\n");
	scanf("%d", &secim);	
	printf("\n\n");
	
	sirala(sayilar, boyut, secim);
	for(i=0; i<boyut; i++){
		printf("%d\n", sayilar[i]);
	}
	
	return 0;
}

void sirala(int sayilar[], int boyut, char secim){
	int i, j;
	
	if(secim == 1){
		for(i=0; i<boyut; i++){
			for(j=i+1; j<boyut; j++){
					if(sayilar[i] > sayilar[j])
						yerDegistir(&sayilar[i], &sayilar[j]);
			}
		}
	}
	else{
		for(i=0; i<boyut; i++){
			for(j=i+1; j<boyut; j++){
					if(sayilar[i] < sayilar[j])
						yerDegistir(&sayilar[i], &sayilar[j]);
			}
		}
	}
	
}

void yerDegistir(int *sayi1, int *sayi2){
	int yedek = *sayi2;
    *sayi2 = *sayi1;
    *sayi1 = yedek;
}
