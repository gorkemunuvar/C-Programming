#include <stdio.h>
#include <math.h>

float mercator(int); //(0,2] aralýðýnda bir deðer girilmeli.

int main(void) {
	int x;
	printf("ln(1 + x) yaklasik degerini hesaplamak icin \n(0 , 2] araliginda bir x degeri girin --> ");
	scanf("%d", &x);
	
	float merc = mercator(x);
	printf("ln(%d) yaklasik degeri --> %.2f\'dir.", 1 + x, merc);
	
	return 0;
}

float mercator(int x){
	int i;
	float toplam = 0;
	
	for(i=1; i<=5; i++)
		if(i % 2 == 1)
			toplam += pow(x, i) / i;
		else
			toplam += -(pow(x, i) / i);
			
	return toplam;
}
