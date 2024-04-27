#include<stdio.h>
int facto(int n,int*fact){
       *fact=1;
      for(int i=2;i<=n;i++){
            *fact=*fact*i;
      }
      return *fact;

}

int main(){
      int n,fact;
      printf("enter the number ");
      scanf("%d",&n);
      int k= facto(n,&fact);
      printf("%d",k);
}