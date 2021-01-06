/* Program: Maks3_Rijal Azmi O.R.S.c
 * Deskripsi: Menentukan bilangan terbesar dari 3 bilangan yang dimasukkan
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 1 Desember 2020/ver 0.1
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
int main(){
  /* Kamus Data */
  int x, y, z, maks;

  /* Algoritma */
  scanf("%d %d %d", &x, &y, &z);

  if(x > y){
    if(x > z)
      maks = x;
    else
      maks = z;
  }else{
    if(y > z)
      maks = y;
    else
      maks = z;
  }
  printf("%d\n", maks);

  return 0;
}