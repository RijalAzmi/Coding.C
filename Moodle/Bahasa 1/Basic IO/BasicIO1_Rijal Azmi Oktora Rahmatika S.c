/* Program: BasicIO1
 * Deskripsi: Menampilkan bilangan dua kali lebih besar dari bilangan yang dimasukkan
 * Nama: Rijal Azmi Oktora Rahmatika S
 * Tanggal/versi: 30 Desember 2020/ver 0.2
 * Compiler: Visual Studio Code
 */

#include <stdio.h>
int main()
{
	int number;
  scanf("%d", &number);
  if(number >= 0 & number <= 100){
    number = number * 2;
    printf("%d\n", number);
  }
	return 0;
}