/* Program: GanjilGenap_Rijal Azmi O.R.S.c
 * Deskripsi: Menentukan Ganjil Genap
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 1 Desember 2020/ver 0.1
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
int main(){
  /* Kamus Data */
  int angka;

  /* Algoritma */
  scanf("%d", &angka);
  
  if(angka %2 != 0){
    printf("ganjil\n");
  }else
  {
    printf("genap\n");
  }
  return 0;
}