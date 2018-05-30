#include <stdio.h>
#include <math.h>

int faktoriyel(int);
int usHesapla(int, int);
double sinusHesapla(double);

int main(void) {
	int aci;
	double sonuc;
	
	printf("Radyan cinsinden hesaplanacak sinus acisi ->");
	scanf("%d", &aci);
	
	sonuc = sinusHesapla(aci);
	printf("sinus(%d) = %lf", aci, sonuc);
	
	return 0;
}

int faktoriyel(int sayi){
	int fak=1, i;
	for(i=1; i<=sayi; i++)
		fak *= i;
	return fak;
}

int usHesapla(int sayi, int us){
	int i, sonuc=1;
	for(i=1; i<=us; i++)
		sonuc *= sayi;
	return sonuc;
}

double sinusHesapla(double aci){
	int i, durum = 0;//Durum 0 ise eksi 1 ise artýyý temsil ediyor.
	double toplam = 0.0;
	for(i=3; i<=9; i+=2){
		if(durum==0){
			toplam += -(pow(aci, i) / faktoriyel(aci)); 
			durum = 1;
		}
		else{
			toplam += pow(aci, i) / faktoriyel(aci);
			durum = 0;
		}
	}
	return aci + toplam;
}


/*#include <stdio.h> #include <math.h> 
 
double sinus(double); int faktoriyel(int); 
 
int main(void) {  double aci;  printf("Hangi radyan acinin sinusu hesaplanacak -> ");  scanf("%lf",&aci);  printf("%lf radyanlik acinin sinusu %lf\'dir.\n",aci,sinus(aci));  return 0; } 
 
int faktoriyel(int a) {  int i,f=1;  for(i=2;i<=a;i++)    f*=i;  return(f); } 
 
double sinus(double aci) {  int i;  double toplam=0.0;   for(i=1;i<=9;i=i+2)     toplam+=pow(-1,(i-1)/2.0)*(pow(aci,i)/faktoriyel(i));  return(toplam);    }*/
