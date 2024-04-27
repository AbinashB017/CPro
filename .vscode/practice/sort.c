#include<stdio.h>
int main(){
      int arr[25],i,j,n;
      printf("enter the lements in the aray");
      scanf("%d",&n);
      int*ptr=arr;
      for(i=0;i<n;i++){
            scanf("%d",(ptr+i));
      }
      

      for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                  if( *(ptr+i) > *(ptr+j)){
                        int temp=*(ptr+i);
                        *(ptr+i)=*(ptr+j);
                        *(ptr+j)=temp;
                  }
                  
                  
            }
            
      }
      printf("element after sorting:");
      for(i=0;i<n;i++){
            printf("%d ",*(ptr+i));
      }
            



}