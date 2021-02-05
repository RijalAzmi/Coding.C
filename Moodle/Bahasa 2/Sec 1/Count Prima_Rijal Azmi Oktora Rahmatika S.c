/* Program: CountPrima_Rijal Azmi O.R.S.c
 * Deskripsi: Menghitung jumlah bilangan prima di dalam array
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 24 Desember 2020
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
  //Kamus Data
  int bil[10];
  int i, j, count = 0;
  bool prima;

  //Algoritma
  scanf("%d", &bil[0]);
  for(i = 1; i < 10; i++){
    scanf("%d", &bil[i]);
  }
  for(i = 0; i < 10; i++){
    prima = true;
    if(bil[i] != 2 && bil[i] > 2){
      j = 2;
      while(j < bil[i] && prima){
        if(bil[i] % j == 0)
          prima = false;
        j++;
      }
    }else if(bil[i] < 2){
      prima = false;
    }
    if(prima == true)
      count++;
  }
  printf("%d\n", count);

    return 0;
}