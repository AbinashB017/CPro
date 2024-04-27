#include<stdio.h>
int sum=0,r;
 int rev(int n){
      
      if(n){
       r=n%10;
       sum=sum*10+r;
       rev(n/10);
      }
      else{
       return sum;
      
      }
     

 }

 int main(){
      int k;
      printf("enter the number:");
      scanf("%d",&k);
      int l=rev(k);
      printf("%d",l);

 }