/* Program: Right_Rijal_Azmi O.R.S.c
 * Deskripsi: Menampilkan N huruf dari kanan
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 3 Desember 2020
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
int main(){
  /* Kamus Data */
  char kalimat[40] = {};
  int i, n, len;

  /* Algoritma */
  scanf("%[^\n]s", kalimat);
  scanf("%d", &n);
  
  len = strlen(kalimat); //Panjang array

  for(i = 0; kalimat[i]; i++){
    kalimat[i] = kalimat[i+len-n];
  }
  printf("%s", kalimat);

  return 0;
}