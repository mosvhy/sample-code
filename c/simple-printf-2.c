#include<stdio.h>
int main(){
  int umur;
  scanf("%d",&umur);
  fflush(stdin);
  if(umur>0&&umur<=100){
    printf("Selamat ulang tahun yang ke %d yaaa !\n",umur);
  }
  return 0;
}