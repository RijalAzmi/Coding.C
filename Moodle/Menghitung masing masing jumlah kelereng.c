/* Deskripsi: Menghitung masing masing jumlah kelereng
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 3 Desember 2020
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
int main(){
  /* Kamus Data */
  int M = 0;  // Warna Merah
  int B = 0;  // Warna Biru
  int K = 0;  // Warna Kuning
  char N;  
  int i = 0;
  int total;

  /* Algoritma */
  scanf("%d\n", &total);

  scanf("%c", &N);
  if(N == 'M')
    M++;
  else if (N == 'B')
    B++;
  else if (N == 'K')
    K++;
  for( i = 1; i < total; i++)
  {
  scanf(" %c", &N);
  if(N == 'M')
    M++;
  else if (N == 'B')
    B++;
  else if (N == 'K')
    K++;
  }
  printf("%d %d %d", M, B, K);
  return 0;
}