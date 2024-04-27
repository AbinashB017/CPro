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
      int max=arr[0];

      for(i=0;i<n;i++){
            if(max<arr[i]){
                  max=arr[i];
            }
      }
      printf("max is %d",max);
      return 0;
}