#include<stdio.h>
int main(){
  int T;
  double A[3],B[3];
  int i=0;
  scanf("%d",&T);
  fflush(stdin);
  if(T==3){
    while(i<T){
      scanf("%lf %lf",&A[i],&B[i]);
      fflush(stdin);
      i++;
    }
    for(i=0;i<3;i++){
      printf("%.2lf\n",(B[i]/(360/A[i])));
    }
  }
  return 0;
}
/* sample input
60 60
11 100000
7 100000

*/