#include <stdio.h>

char asalMi(int);
char eulerSansliSayisiMi(int);

int main(void) {
	int i, N;
	printf("[2-41] araliginda bir N sayisi girin ->");
	scanf("%d", &N);
	
	if(eulerSansliSayisiMi(N) == '1')
		printf("Girilen sayi Euler Sansli Sayisidir.\n");
	else
		printf("Girilen sayi Euler Sansli Sayisi degildir.\n");
	
	return 0;
}

char asalMi(int sayi){
	int i; char durum = '1';
	for(i=2; i<sayi; i++){
		if(sayi % i == 0){
			durum = '0';
			break;
		}
	}
	return durum;
}

char eulerSansliSayisiMi(int N){
	int X, denklem;
	char durum = '1';
	for(X=0; X<=N-2; X++){
		denklem = X * X + X + N;
		if(asalMi(denklem) != '1'){
			durum = '0';
			break;
		}
	}
	return durum;
}
