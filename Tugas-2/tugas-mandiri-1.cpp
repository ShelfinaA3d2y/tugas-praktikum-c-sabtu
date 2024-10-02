#include <stdio.h>

int main() {
	int alas = 8;
	int tinggi = 5;
	double luas;
	
	luas = ( alas * tinggi)/2;
	
	printf("luas segitiga dengan alas %d cm, dan tinggi %d cm adalah %2f cm\n", alas, tinggi, luas);
	
	return 0;
}
