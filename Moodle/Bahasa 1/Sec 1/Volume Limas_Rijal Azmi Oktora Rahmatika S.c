/* Program: Limas_Nama.c
 * Deskripsi: Menghitung volume limas
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 1 Desember 2020
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
int main(){
  float volume;
  float p, l, t;

  scanf("%f %f %f", &p, &l, &t);
  if((p > 0) && (p < 20)){
    if((l > 0) && (l < 20)){
      if((t > 0) && (t < 20)){
        volume = (double) 1/3 * p* l* t;
      }
    }
  }
  printf("%f\n", volume);
  return 0;
}
