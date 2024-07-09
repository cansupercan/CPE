#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main(void) {
  int i,j,k,times=1,n,x;
  scanf("%d ", &times);
    for(k=0;k<times;k++){
      int all=0,ans=0,a=0,b=0,c=0;
      scanf("%d", &n);
      int far[n];
      for(j=0;j<n;j++){
        scanf("%d", &far[j]); 
      } 
      qsort(far, n, sizeof(int), cmpfunc);
      if(n%2==0){
        x=far[n/2];
        for(j=0;j<n;j++){
          ans=ans+(abs(x-far[j]));
        }
      }
      if(n%2==1){
        x=far[n/2+1];
        for(j=0;j<n;j++){
          a=a+(abs(x-far[j]));
        }
        x=far[n/2];
        for(j=0;j<n;j++){
          b=b+(abs(x-far[j]));
        }
        x=far[n/2-1];
        for(j=0;j<n;j++){
          c=c+(abs(x-far[j]));
        }
        if(a<=b && a<=c){ans=a;}
        else if(b<a && b<c){ans=b;}
        else{ans=c;}
      }
      printf("%d\n",ans); }
}
