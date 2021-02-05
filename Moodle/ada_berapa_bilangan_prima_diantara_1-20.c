//2. Ada berpa bilangan prima antara 1-20?

#include <stdio.h>
int main(){
	
	int count, x, y, PembagiHabis;
	
	PembagiHabis = 0;
	count = 0;
	for (x=1; x<=20; x++ ){
		for (y=1; y<x; y++ ){
			if (x % y == 0)
				PembagiHabis = y;
		}
	if (PembagiHabis == 1)
	count++;
	}
	printf ("%d", count); 
	return 0;
}
