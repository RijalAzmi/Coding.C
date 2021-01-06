//3. Ada berapa bilangan prima antara X dan Y?
// 4. Berapa selisih bilangan prima terbesar dengan prima terkecil?

#include <stdio.h>
int main(){
	
	int count, a, b, x, y, PembagiHabis, Max, Min, selisih;
	

	PembagiHabis = 0;
	count = 0;
	scanf("%d %d", &x, &y);
	Max = x;
	Min = y;
	//if ((x>0) && (y>0)){
		for (a=x; a<=y; a++ ){ // Dari x sampai y a untuk mengecek bil. prima diantaranya
			for (b=1; b<a; b++ ){ // Pembagi bilangan
				if (a % b == 0)
					PembagiHabis = b; // Untuk mengeatahui bilangan a mod b berapa kali mod hasilnya 0
			}
		if (PembagiHabis == 1){ //a Prima disini
		count++; 
			// Mencari prima terbesar dan terkecil
			if (a>Max)
				Max = a;
			if (Min>a)
				Min = a;	}
		}
	selisih = Max - Min; //Mencari selisih
	printf ("Diantara bilangan %d sampai %d ada %d bilangan prima", x, y, count); 
	printf ("\nBilangan prima terkecil adalah %d dan Bilangan prima terbesar adalah %d", Min, Max);
	printf ("\nSelisih dari bilangan prima terbesar dan terkecil adalah %d", selisih);
	return 0;
}
