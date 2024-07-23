#include <stdio.h>
#include <math.h>
int main(void) {
  int a,b,x[10],y[10],i,w=0;
  while(1){
    int count=0;
  scanf("%d",&a);
  scanf("%d",&b);
  if(a==0 && b==0){
    break;
  }
  for(i=0;i<10;i++){
     x[i]=a%10;
    y[i]=b%10;
    a=a/10;
    b=b/10;
  }
  for(i=0;i<10;i++){
    if(x[i]+y[i]+w>=10){
      count++;
      w=1;
    }
    else{
      w=0;
    }
  }
  switch(count){
    case 0:
      printf("No carry operation.\n");
      break;
    case 1:
      printf("1 carry operation.\n");
      break;
    default:
      printf("%d",count);
      printf(" carry operations.\n");
      break;
    
  }
  }
}