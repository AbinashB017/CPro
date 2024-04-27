#include<stdio.h>

void print(int arr[],int start,int end){
      if(start>=end) return;
      printf("%d",arr[start]);
      return print(arr,start+1,end);
}

int main(){
      int n,arr[100];
      printf("enter the number of elements in the array");
      scanf("%d",&n);
      for(int i=0;i<=n;i++){
            scanf("%d",arr[i]);
      }

      print(arr,0,n);
}