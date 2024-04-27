#include<stdio.h>
int main(){
      int i,n,sum=0;
      printf("enter how many elements in the array:");
      scanf("%d",&n);
      int arr[n];
      for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
      }
      for(i=0;i<n;i++){
            sum=sum+arr[i];
      }

      printf("sum is %d",sum);
      return 0;

}