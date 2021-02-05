/*
3) Dalam sebuah array 1 dimensi, dengan jumlah elemen 10; Tentukan ada berapa bilangan prima pada array tersebut
2) Ada berapa bilangan prima yang kurang dari 20
*/

#include <stdio.h>
int main(){
	
	int ArrBil[10], ArrPrima[10]={0};
	int i, x, PembagiHabis, count;
	
	count = 0;
	
	for (i=0; i<10; i++ ){
		scanf ("%d", &ArrBil[i]);
		for (x=1; x<ArrBil[i]; x++ ){
			if (ArrBil[i] % x == 0)
				PembagiHabis = x;
		}
	if (PembagiHabis == 1)
		ArrPrima [i] = ArrBil[i];
	}
	for(i=0; i<10; i++){
		if (ArrPrima[i]!=0){
		printf ("%d ", ArrPrima[i]);
			if (ArrPrima[i]<20)
				count++;
		}
	}
	printf ("\n ada %d bilangan prima yang kurang dari 20", count);
	return 0;
}


/*
Untuk tes hasil output dari input
for (i=0; i<10; i++ )
printf ("%d", ArrBil[i]);
*/
