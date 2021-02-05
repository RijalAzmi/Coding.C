/* Program: WujudBenda_Rijal Azmi O.R.S.c
 * Deskripsi: Menentukan Wujud Benda
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 1 Desember 2020/ver 0.1
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
int main(){
  float suhu;

  scanf("%f", &suhu);
  
  if(suhu > -150 && suhu < 150){
    printf("berwujud cair\n");
  }else
  {
    printf("berwujud non cair\n");
  }
  return 0;
}