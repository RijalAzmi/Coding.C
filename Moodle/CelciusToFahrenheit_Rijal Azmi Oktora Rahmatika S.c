/* Program: CelciusToFahrenhait_Nama.c
 * Deskripsi: Mengonversi suhu dalam Celcius ke Fahrenheit
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 1 Desember 2020
 * Compiler: Visual Studio Code
 * Catatan: F = C * 1,8 + 32
 */

#include <stdio.h>
#include <math.h>

int main(){
  /* Kamus Data */
  float celcius, fahrenheit;

  /* Algoritma */
  scanf("%f", &celcius);
  if(celcius >= -100 && celcius <= 100){
    fahrenheit = celcius * 1.8 + 32;
    printf("%.2f\n", fahrenheit);
  }
  return 0;
}