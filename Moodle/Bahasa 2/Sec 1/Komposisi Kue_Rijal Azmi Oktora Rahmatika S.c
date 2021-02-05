/* Program: Kue_Rijal Azmi O.R.S.c
 * Deskripsi: Mencari komposisi kue
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 14 Desember 2020
 * Compiler: Visual Studio Code
 */

#include <stdio.h>

int main(){
  //Kamus Data
  float tolerance, grade = 0;
  char bahan[255] = {};
  char pembanding[255] = {};
  int same = 0, jumlah = 0;
  int i, j;

  //Algoritma
  scanf("%f\n", &tolerance);
  scanf("%[^\n]\n", bahan);
  scanf("%[^\n]", pembanding);

  for(i = 0; pembanding[i]; i++){
    if(pembanding[i]!=' '){
      for(j = 0; bahan[j]; j++){
        if(pembanding[i] == bahan[j]){
          bahan[j];
          same++;
        }
      }
      jumlah++;
    }
  }
  grade = (float) same/jumlah*100;
  if(grade >= tolerance)
    printf("sama");
  else
    printf("tidak sama");

  return 0;
}