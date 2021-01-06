/* Deskripsi: Menampilkan kelipatan dari jarak yang telah di tentukan
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 3 Desember 2020
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
int main(){
  /* Kamus Data */
  int p, q, r, i, count = 0;

  /* Algoritma */
  scanf( "%d %d", &q, &r);
  scanf("%d", &p);
  
  for(i = q; i <= r; i++){
    if(i %p == 0){
      count++;
      printf("%d\n", i);
    }
  }
  if(count == 0){
    printf("kosong");
  }
  return 0;
}