/* Program: MencariHuruf_Rijal Azmi O.R.S.c
 * Deskripsi: Menentukan ada atau tidaknya suatu karakter dalam kalimat
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 2 Desember 2020
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
int main(){
  /* Kamus Data */
  char x[] = "jtkpolban";
  char c;
  int i;

  /* Algoritma */
  scanf("%c", &c);

  if(c >= 0x41 && c <= 0x5A)
    c += 0x20;
  
  for(i = 0; x[i]; i++){
    if(x[i] == c){
      printf("ada");
      return 0;
    }
  }
  printf("tidak ada");

  return 0;
}