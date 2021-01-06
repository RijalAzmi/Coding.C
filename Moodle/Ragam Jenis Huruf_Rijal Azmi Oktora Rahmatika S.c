
#include <stdio.h>
int main(){
  /* Kamus Data */
  char kalimat[255];
  int i, j, count = 0, len;

  /* Algoritma */
  scanf("%s", kalimat);

  for(i = 0; kalimat[i]; i ++){
    if(kalimat[i] >= 0x41 && kalimat[i] <= 0x5A)
      kalimat[i] += 0x20; //mengubah jadi huruf kecil
    for(j = 0; kalimat[j]; j++){
      if(kalimat[i] == kalimat[j]){
        if(j < i)
          break;
        else if(j > i)
          count++;
      }
    }
  }
  for(len = 0; kalimat[len]; len++); //panjang string
  printf("%d\n", len-count);

  return 0;
}