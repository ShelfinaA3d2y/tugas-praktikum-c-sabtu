#include <stdio.h>
#include <math.h>

int main() {
	//deklarasi variabel
	float alas = 4.0;
	float tinggi = 5.0;
	float sisi_miring;
	
	//menghitung sisi miring menggunakan rumus phytagoras
	sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));
	
	//menampilkan hasil
	printf("sisi miring segitiga: %.2f cm\n", sisi_miring);
	
	return 0;
};
