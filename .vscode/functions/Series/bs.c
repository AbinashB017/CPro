#include<stdio.h>

int main(){
      int i,x,j,n;
      printf("enter how many elements in the array:");
      scanf("%d",&n);
      int arr[n];
      for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
      }
      printf("enter the element top search for x:");
      scanf("%d",&x);
      int low=0,high=n-1;
      int mid=(low+high)/2;
      while(low<=high){
            if(x==arr[mid]){
                  return mid;
            }
            else if(x>arr[mid]){
                  low=mid+1;
                  mid=(low+high)/2;
            }
            else{
                  high=mid-1;
                  mid=(low+high)/2;
            }
      }
      printf("%d",i);
      return 0;

}