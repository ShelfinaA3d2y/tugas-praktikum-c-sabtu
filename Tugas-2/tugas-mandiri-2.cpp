#include <stdio.h>
#define phi 3.14

int main() {
    //deklarasi variabel
	float diameter = 15.0;
	float jari_jari;
	float volume;
	
	//menghitung jari-jari
	jari_jari = diameter / 2.0;
	
	//menghitung volume bola
	volume = (4.0 / 3.0) * phi * (jari_jari * jari_jari * jari_jari);
	
	//menampilkan hasil
	printf("volume bola: %.2f cm^3\n", volume);
	
	return 0;
}
