/* Deskripsi: menampilkan jumlah warga berdasarkan RT, kedalam histogram
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 3 Desember 2020
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
#include<stdio.h>

int main(){
    /* Kamus Data*/
    int calon,no[8],hasil[22],i,j,jumlah;

    /* Algoritma*/
	jumlah = 0;
    scanf("%d",&calon);
	
	
	for(i = 1; i <= calon;i++){
    	scanf("%d %d",&no[i],&hasil[i]);
		jumlah += hasil[i];
	}
	
	printf("%d\n",jumlah);
	for(i = 1; i <= calon;i++){
		printf("%d ",no[i]);
		for(j = 1;j<= hasil[i];j++){
			printf("*");
		}
		printf(" %d",hasil[i]);
		printf("\n");	
	}
    return 0;
}