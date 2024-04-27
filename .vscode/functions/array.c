#include<stdio.h>

int main(){
      int arr[5];
      for(int i=0;i<=4;i++){
            printf("enter the element %d\n",i+1);
            scanf("%d",&arr[i]);
      }
      printf("%d",arr[0]);
      return 0;
}