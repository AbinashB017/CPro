#include<stdio.h>

int main(){
      int i,n;
      printf("enter how many nelemen ts in the array:");
      scanf("%d",&n);
      int arr[n];
      printf("enter the elements of the array:");
      for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
      }
      int start=0;
      int end=n-1;
      while(start<end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;

      }
      printf("new array is:");
      for(i=0;i<n;i++){
            printf("%d ",arr[i]);
      }
      return 0;
}