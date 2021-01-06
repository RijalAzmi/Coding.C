/* Program: BiayasetelahBunga_Rijal Azmi O.R.S.c
 * Deskripsi: Menentukan biaya yang harus dibayar
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 1 Desember 2020/ver 0.2
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
int main()
{
	/* Kamus Data */
  float cost, funds, totalBiaya;

  /* Algoritma */
  scanf("%f\n%f", &cost, &funds);

  if(cost < 150000 && funds <= 100){
    funds = cost * funds / 100;
    totalBiaya = cost + funds;
  }
  printf("%.2f\n", totalBiaya);
  return 0;
}