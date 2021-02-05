/* Program: Prima_Rijal Azmi O.R.S.c
 * Deskripsi: Menentukan suatu bilangan prima
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 21 Desember 2020
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
  //Kamus Data
  int x, i;
  bool prima = true;

  //Algoritma
  scanf("%d", &x);

  if(x != 2 && x > 2)
  {
    i = 2;
    while(i < x && prima)
    {
      if(x %i == 0)
          prima = false;
        i++;
    }
  }else if(x < 2)
    {
      prima = false;
    }

    if(prima == true)
      printf("prima\n");
    else
      printf("bukan prima\n");
    return 0;
}