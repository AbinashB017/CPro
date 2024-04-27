#include<stdio.h>
int main(){
      int arr[10],i;
      printf("enter the marks of the students:");
      for(int i=0;i<10;i++){
            scanf("%d",&arr[i]);

      }
      for(i=0;i<10;i++){
            if(arr[i]<35){
                printf("%d",i);
      }

      }
      
      return 0;
}