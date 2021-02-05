/* Program: Vokal_Rijal Azmi O.R.S.c
 * Deskripsi: Menentukan suatu input itu huruf vokal atau bukan
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 2 Desember 2020
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
int main(){
  /* Kamus Data */
  char vokal[10] = {'a', 'A', 'i', 'I', 'u', 'U', 'e', 'E', 'o', 'O'};
  char huruf;
  int i;

  /* Algoritma */
  scanf("%c", &huruf);

  for(i = 0; i < 10; i ++){
    if(vokal[i] == huruf){
      printf("true");
      break;
    }
  }
  if(i == 10)
    printf("false");

  return 0;
}