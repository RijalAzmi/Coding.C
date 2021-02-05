/* Program: SelisihPrima_Rijal Azmi O.R.S.c
 * Deskripsi: Mencari nilai Selisih Bilangan Prima max dan min dari x sampai y
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 14 Desember 2020
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  int x, y, count, countPrima = 0, min, max;
  int i, j;
  scanf("%d %d", &x, &y);

  min = y;
  max = x;

  for(i = x; i <= y; i++){
    count = 0;
    for(j = 1; j <= i; j++){
      if(i % j == 0){
        count++;
        if(count > 2)
          break;
      }
    }
    if(count == 2){
      countPrima++;
      if(min > i){
        min = i;
      }
      else{
        if(max < i){
          max = i;
        }
      }
    }
  }
  if(countPrima > 1){
    printf("%d", max - min);
  }
  return 0;
}