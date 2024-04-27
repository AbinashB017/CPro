#include<stdio.h>
int main(){
      int r,c;      
      printf("enter the number of rows");
      scanf("%d",&r);
      printf("enter the number of col");
      scanf("%d",&c);
      int a[r][c];
      printf("enter the elements");
      for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                  scanf("%d",&a[i][j]);
            }
      }
      for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                  printf("%d",a[i][j]);
            }
            printf("\n");
      }
      int sum=0;
      for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                  sum=sum+a[i][j];
            }
      }
      printf("the sum of all the lements in the array is %d",sum);
}
