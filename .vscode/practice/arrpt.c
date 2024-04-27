#include<stdio.h>
int main(){
      int arr[25],i,j,n;
      printf("enter the number of elements in the array");
      scanf("%d",&n);
      for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
      }
      
      for(i=0;i<n;i++){
            int* x=&arr[i];
            
            printf("%d ",*x);
      }
}