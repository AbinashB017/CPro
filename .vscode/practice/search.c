#include<stdio.h>
int main(){
      int arr[24],i,n,x;
      printf("enter the number of elements int he array:");
      scanf("%d",&n);
      int* ptr=arr;
      for(i=0;i<n;i++){
            scanf("%d",(ptr+i));
      }
      printf("enter the element to search for:");
      scanf("%d",&x);
      for(i=0;i<n;i++,ptr++){
            
            if(x==*ptr){
                  
                  printf("%d",(*ptr));
            }
      }

}