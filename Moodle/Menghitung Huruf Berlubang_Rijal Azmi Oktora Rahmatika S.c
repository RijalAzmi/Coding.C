/* Program: Holes_Rijal_Azmi O.R.S.c
 * Deskripsi: Berapa banyak lubang pada kalimat
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 3 Desember 2020
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
int main(){
  /* Kamus Data */
  char kalimat[60] = {};
  int i, count = 0;

  /* Algoritma */
  scanf("%[^\n]s", kalimat);
  
  for(i = 0; kalimat[i]; i++){
    switch(kalimat[i]){
      case 'A':
        count ++;
        break;
      case 'B':
        count +=2;
        break;
      case 'D':
        count ++;
        break;
      case 'O':
        count ++;
        break;
      case 'P':
        count ++;
        break;
      case 'Q':
        count ++;
        break;
      case 'R':
        count ++;
        break;
    }
  }
  printf("%d", count);

  return 0;
}