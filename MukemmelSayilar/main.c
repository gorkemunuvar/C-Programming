#include <stdio.h>

char mukemmelSayiMi(int);

int main(void) {
	
	int durum, sinir, i;
	printf("Bir sinir deger girin: ");
	scanf("%d", &sinir);
	
	for(i=1; i<=sinir; i++){
		if(mukemmelSayiMi(i) == '1')
			printf("%d\n", i);
	}
	
	return 0;
}

char mukemmelSayiMi(int n){
	int i, toplam= 0;
	
	for(i=1; i<=n/2; i++){
		if(n%i == 0)
			toplam = toplam + i;
	}
	
	if(toplam == n)
		return '1';
	else
		return '0';
}
