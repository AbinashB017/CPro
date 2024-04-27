#include<stdio.h>
int main(){
      int i,n;
      printf("enter how many elements in the array:");
      scanf("%d",&n);
      int arr[n];
      printf("enter the elements of the array:");
      for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
      }
      for(i=0;i<n;i++){
            if(i%2!=0){
                  arr[i]=arr[i]*2;
            }
            else{
                  arr[i]=arr[i]+10;
            }
      }
      for(i=0;i<n;i++){
            printf("%d ",arr[i]);
      }
      return 0;

      

}