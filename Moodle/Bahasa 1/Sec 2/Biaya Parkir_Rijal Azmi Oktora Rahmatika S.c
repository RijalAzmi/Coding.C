/* Program: Parkir_Rijal Azmi O.R.S.c
 * Deskripsi: Menghitung biaya parkir
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 1 Desember 2020
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
int main(){
  /* Kamus Data */
  int k; // jenis kendaraan
  int t; // waktu
  int totalBiaya;

  /* Algoritma */
  scanf("%d %d", &k, &t);

  if((t > 0) && (t <= 24)){
    switch(k){
      case 1:
          totalBiaya = 2000 + 1000 * (t - 1);
          break;
      case 2:
          totalBiaya = 1000 + 500 * (t - 1);
          break;
    }
  }
  printf("%d", totalBiaya);
  return 0;
}
