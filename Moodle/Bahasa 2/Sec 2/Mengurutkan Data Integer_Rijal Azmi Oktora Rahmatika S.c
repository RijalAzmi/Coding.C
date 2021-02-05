/* Program: Sort3Desc_Rijal Azmi O.R.S.c
 * Deskripsi: Mengurutkan 3 buah elemen integer secara descending
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 24 Desember 2020
 * Compiler: Visual Studio Code
 */

#include <stdio.h>

void inputArray(int arr[], int len)
{
  int i = 0;
  scanf("%d", &arr[0]);
  for(i = 1; i < len; i++)
    scanf(" %d", &arr[i]);
  
}

void printArray(int arr[], int len)
{
  int i = 0;
  printf("%d", arr[0]);
  for(i = 1; i < len; i++)
    printf(" %d", arr[i]);
}

int main()
{
  //Kamus Data
  int key;
  int i, j; // Counter loop
  int bil[3];
  int len = 3;

  //Algoritma
  inputArray(bil, len);

  for(i = 1; i < len; i++){
    j = i;
    while(j > 0 && bil[j - 1] < bil[j]){
      key = bil[j];
      bil[j] = bil[j - 1];
      bil[j - 1] = key;
      j--;
    }
  }
  printArray(bil, len);

  return 0;
}