#include<stdio.h>
int main(){
      int arr[25],n,i,j;
      printf("enter the number of elements in the array");
      scanf("%d",&n);
      for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
      }
      int sum=0;
      int* ptr=arr;
      for(i=0;i<n;i++,ptr++){
            sum=sum+ *ptr;

      }
      printf("sum is %d",sum);
}