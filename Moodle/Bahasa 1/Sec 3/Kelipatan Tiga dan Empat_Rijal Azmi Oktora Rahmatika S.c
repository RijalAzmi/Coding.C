/* Program: GanjilGenap_Rijal Azmi O.R.S.c
 * Deskripsi: Menentukan suatu bilangan ganjil atau genap atau nol
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 1 Desember 2020/ver 0.1
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
int main(){
  /* Kamus Data */
  int bilangan;
  int cek; // Berisi 1 jika bilangan merupakan kelipatan 3 dan 4
           // Berisi 0 jika sebaliknya

  /* Algoritma */
  cek = 0;
  scanf("%d", &bilangan);

  if(bilangan %3 == 0 && bilangan %4 == 0){
    cek = 1;
  }
  printf("%d\n", cek);
  return 0;
}