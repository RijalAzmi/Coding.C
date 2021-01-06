/* Program: LuasLingkaran_Rijal Azmi O.R.S.c
 * Deskripsi: Menghitung luas lingkaran dari jari-jarinya
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 1 Desember 2020/ver 0.2
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
#include <math.h>

int main(){
  /* Kamus Data */
  float luas;
  float r;

  /* Algoritma */
  scanf("%f", &r);
  if(r > 0 && r <= 100){
    luas = 3.14 * (r * r);
    printf("%.2f\n", luas);
  }
  return 0;
}