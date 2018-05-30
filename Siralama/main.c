#include <stdio.h>

int main(void) {
	int i, j, gecici, diziBoyutu, deger;
	printf("Olusturulacak dizinin boyutunu girin: ");
	scanf("%d", &diziBoyutu);

	int sayilar[diziBoyutu];
	
	for(i=0; i<diziBoyutu; i++){
		scanf("%d", &deger);
		sayilar[i] = deger;
	}
	
	printf("Siralanmis Sayilar\n----------------------\n");
	for(i=0; i<diziBoyutu; i++){
		for(j=0; j<i; j++){
			if(sayilar[i] > sayilar[j])
			{
				gecici = sayilar[i];
				sayilar[i] = sayilar[j];
				sayilar[j] = gecici;
			}
		}
	}
	
	for(i=0; i<diziBoyutu; i++)
		printf("%d\n", sayilar[i]);
	
	return 0;
}
