#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  int times, t, day, p, i, j;
  scanf("%d ", &times);
  for (t = 0; t < times; t++) {
    int ans = 0, a = 1;
    scanf("%d ", &day);
    scanf("%d ", &p);
    int da[p],d[day];
    for (i = 0; i < p; i++) {
      scanf("%d ", &da[i]);
    }
    for (i = 0; i<day; i++) {
      d[i]=0;
    }
    int x=0;
    for(i=0;i < p ; i++) {
      int dd=day/da[i];
      for (j=0;j<dd;j++){
        int f=(da[i]*(j+1))%7,s=da[i]*(j+1);
        int uu=1;
        for(int h=0;h<x+1;h++){
          if(d[h]==s){
            uu=0;
          }
          if(d[h]==0){
            break;
          }
        }
        if(f>=1 && f<=5 && uu==1){
          ans++;
          d[x]=da[i]*(j+1);
          x++;
        }
      }
    }
    printf("%d \n", ans);
  }
}