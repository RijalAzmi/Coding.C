/* Program: ParkirMalamMinggu_Rijal Azmi O.R.S.c
 * Deskripsi: Menghitung biaya parkir
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 1 Desember 2020/ver 0.1
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

  switch(k){
    case 1:
      if(t > 8)
        printf("disegel\n");
      else{
        if(t <= 5){
          totalBiaya = t * 1500;
        }else{
          totalBiaya = (t * 1500) + (500 * (t - 5));
        }
        printf("%d\n", totalBiaya);
      }
      break;
    case 2:
      if(t > 8)
        printf("disegel\n");
      else{
        if(t <= 5){
          totalBiaya = t * 1000;
        }else{
          totalBiaya = (t * 1000) + (500 * (t - 5));
        }
        printf("%d\n", totalBiaya);
      }
      break;
  }
  return 0;
}