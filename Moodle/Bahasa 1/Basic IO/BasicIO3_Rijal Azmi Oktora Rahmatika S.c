/* Program: BasicIO3
 * Deskripsi: Menampilkan bilangan di range x hingga y
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 30 Desember 2020/ver 0.2
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
int main()
{
	int minBil, maxBil, i;

  scanf("%d %d", &minBil, &maxBil);

  if(minBil <= 100 && maxBil <= 100 && minBil <= maxBil){
    for(i = minBil; i <= maxBil; i++){
    printf("%d\n", i);
  }
  }
  printf("\n");
	return 0;
}