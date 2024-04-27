#include<stdio.h>
int main(){
      
      int arr[5],i;
      
      for(int i=0;i<=4;i++){
            printf("enter the element %d ",i+1);
            scanf("%d",&arr[i]);
      }
      for(i=0;i<=4;i++){
            printf("%d ",arr[i]);

      }
      int max=arr[0];
      for(i=1;i<=4;i++){
            if(max<arr[i]){
                  max=arr[i];
            }
      }
      printf("value of maximum is:%d",max);
      
      return 0;
}