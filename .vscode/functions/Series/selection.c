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
            int min=i;
            for(j=i+1;j<n;j++){
                  if(arr[j]<arr[min]){
                        min=j;
                  }
            }
            if(min!=i){
                        int temp=arr[i];
                        arr[i]=arr[min];
                        arr[min]=temp;
                  }
      }
      printf("\n");
      for(i=0;i<n;i++){
            printf("%d",arr[i]);
      }
      return 0;
}      