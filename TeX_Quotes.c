#include <stdio.h>
#include <math.h>
int count=0;
void sort(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < i; ++j) {
      if (arr[j] > arr[i]) {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        count++;
      }
    }
  }
}
int main(void) {
int g=0,k,n,h;
scanf("%d",&g);
for(k=0;k<g;k++){
    scanf("%d",&n);
    char ar[n];
    for(h=0;h<n;h++){
        scanf("%s",&ar[h]);
    }
    sort(ar,n);
    printf("%s","Optimal train swapping takes ");
    printf("%d",count);
    printf("%s"," swaps.\n");
    count=0;
}
}
