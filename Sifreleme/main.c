#include <stdio.h>

int i;
char buyukHarfler[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char kucukHarfler[] = {"abcdefghijklmnopqrstuvwxyz"};

void ROT13(char giris[], char cikis[], int karakterSayisi);
int indexBul(char);
int buyukMuKucukMu(char); //Geriye 1 dönerse büyük harf, 0 dönerse küçük harf.

int main(void) {
	int karakterSayisi;
	printf("Girilecek karakter sayisi -> ");
	scanf("%d", &karakterSayisi);
	
	char giris[karakterSayisi];
	char cikis[karakterSayisi];
	
	printf("Sifrelenecek kelime --> ");
	scanf("%s", &giris);
	
	ROT13(giris, cikis, karakterSayisi);
		
	return 0;
}

void ROT13(char giris[], char cikis[], int karakterSayisi){
	int i, index;
	for(i=0; i<karakterSayisi; i++){
		index = indexBul(giris[i]);
		index = (index + 13) % 26;
		if(buyukMuKucukMu(giris[i]) == 1)
			cikis[i] = buyukHarfler[index];
		else
			cikis[i] = kucukHarfler[index];
	}
	
	printf("\n\nROT13 ile sifrelenmis kelime --> %s\n\n", cikis);
}

int indexBul(char harf){
	for(i=0; i<26; i++)
		if(kucukHarfler[i] == harf)
			return i;
			
	for(i=0; i<26; i++)
		if(buyukHarfler[i] == harf)
			return i;
}

int buyukMuKucukMu(char harf){
	for(i=0; i<26; i++)
		if(buyukHarfler[i] == harf)
			return 1;
	for(i=0; i<26; i++)
		if(kucukHarfler[i] == harf)
			return 0;
	
}
