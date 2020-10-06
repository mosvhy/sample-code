#include<stdio.h>
#include<math.h>
int main(){
  double l,b,h;
  scanf("%lf",&l);fflush(stdin);
  scanf("%lf",&b);fflush(stdin);
  scanf("%lf",&h);fflush(stdin);
  if(
    l>0&&l<=100&&
    b>0&&b<=100&&
    h>0&&h<=100
    ){
    double luas_permukaan = (2 * (b/2 * h)) + (3 * (l * b));
    printf("%.3lf\n",luas_permukaan);
  }
  return 0;
}
/* sample input
10 10 8.6602540
*/