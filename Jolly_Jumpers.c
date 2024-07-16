#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int n=0,count=0;
    while(scanf("%d",&n)==1){
        int ans=1;
        int x[n],z[n-1];
        for (int i=0;i<n;i++){
            scanf("%d",&x[i]);

        }
        for(int i=0;i<(n-1);i++){
            z[i]=1;
        }
        for(int i=0;i<(n-1);i++){
            int b=abs(x[i]-x[i+1]);
            if(b<=n-1 && b>=1){
                z[b-1]=z[b-1]-1;
            }
        }
        for(int i=0;i<(n-1);i++){
            if(z[i]>0){
                ans=0;
                break;
            }
        }
        if(ans==1){
            printf("%s","Jolly\n");
        }else{
             printf("%s","Not jolly\n");
        }
    }
}