#include<stdio.h>
int main(){
      int i,j,n;
      printf("enter how many elements in the array:");
      scanf("%d",&n);
      int arr[n];
      for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
      }

      for(i=0;i<n-1;i++){
            for(j=0;j<n-1;j++){
                  if(arr[j]>arr[j+1]){
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                  }
            }
      }
      printf("\n");
      for(i=0;i<n;i++){
            printf("%d ",arr[i]);
      }
      return 0;
}