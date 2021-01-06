/* Program: Alay_Rijal Azmi O.R.S.c
 * Deskripsi: Mengubah suatu kalimat ke dalam bentuk "alay"
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 2 Desember 2020/ver 0.1
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
int main(){
  /* Kamus Data */
  char kalimat[60];
  int i;

  /* Algoritma */
  scanf("%[^\n]s", &kalimat);

  for(i = 0 ; kalimat[i] ; i++){
    switch(kalimat[i]){
      case 'A':
      case 'a':
        kalimat[i] = '4';
        break;
      case 'I':
      case 'i':
        kalimat[i] = '1';
        break;
      case 'Z':
      case 'z':
        kalimat[i] = '2';
        break;
      case 'E':
      case 'e':
        kalimat[i] = '3';
        break;
      case 'G':
      case 'g':
        kalimat[i] = '6';
        break;
      case 'J':
      case 'j':
        kalimat[i] = '7';
        break;
      case 'B':
      case 'b':
        kalimat[i] = '8';
        break;
    }
  }
  printf("%s", kalimat);

  return 0;
}