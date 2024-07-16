#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main(void) {
  int i,j,times=1,n,x;
  scanf("%d ", &times);
    for(k=0;k<times;k++){
      int all=0,ans=0;
      scanf("%d", &n);
      int far[n];
      for(j=0;j<n;j++){
        scanf("%d", &far[j]); 
      } 
      qsort(far, n, sizeof(int), cmpfunc);
        x=far[n/2];
        for(j=0;j<n;j++){
          ans=ans+(abs(x-far[j]));
        }
      printf("%d\n",ans); }
}
