#include <stdio.h>

char sayiAsalMi(int);

int main(void) {
	int sayi, i, sonuc;
	printf("Asal carpanlarina ayrilacak sayi -> ");
	scanf("%d", &sayi);
	
	sonuc = sayi;
	for(i=2; i<=sayi/2; i++){
		if(sayiAsalMi(i) == '1'){
			while(sonuc % i == 0){
				printf("%d\n", i);
				sonuc = sonuc / i;
			}
			sonuc = sayi;
		}
	}
	
	return 0;
}

char sayiAsalMi(int sayi){
	char durum = '1';
	int i;
	for(i=2; i<sayi; i++){
		if(sayi % i == 0){
			durum = '0';
			break;
		}
	}
	return durum;
}
