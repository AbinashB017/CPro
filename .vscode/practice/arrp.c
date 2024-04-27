#include<stdio.h>
int main(){
      int arr[25],n,i,j;
      printf("enter the number of elements in the array");
      scanf("%d",&n);
      for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
            }
          
      for(i=0;i<n;i++){
            printf("%d ",*(arr+i));

      }           
            
 }
