#include<stdio.h>
int main(){
      int i,n;
      int n1=0;
      int n2=1;
      int n3=n1+n2;
      printf("enter the number of terms:");
      scanf("%d",&n);
      printf("series:%d %d",n1,n2);
      for(i=2;i<=n;i++){
            printf(" %d ",n3);
            n1=n2;
            n2=n3;
            n3=n1+n2;

      }
      return 0;
}