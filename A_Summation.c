#include<stdio.h>
int main(){
  int n;
  scanf("%d", &n)        ;
  int arr[n];
  for(int i=0; i<n; i++){
    scanf("%d",&arr[i] );

  }
  int sum=0;
  for(int i=0; i<n; i++){
    sum= sum + arr[i];
    
  }
  if(sum<0){
    sum= sum * (-1);
  }

  printf("%d", sum);
  return 0;
}
