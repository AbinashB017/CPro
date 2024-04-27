#include<stdio.h>
int main(){
      int n,sum=0,temp,r;
      printf("enter the number:");
      scanf("%d",&n);
      temp= n;
      while(n>0){
            r=n%10;
            sum=(sum*10)+r;
            n=n/10;

      }
      if(temp==sum){
            printf("%d is a palindrome number",temp);
      }
      else{
            printf("%d is not a palindrome number",temp);
      }
      return 0;

}