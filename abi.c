#include<stdio.h>
int main(){
      int n;
      printf("enter the number:");
      scanf("%d", &n);
      int sum=0;
      while(n>0){
            int i=n%10;
            n=n/10;
            if(i%2==0){
                   sum = sum+i;
            }
           
      }
      printf("%d", sum);
   
      return 0;

}