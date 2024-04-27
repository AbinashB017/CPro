#include<stdio.h>
int main(){
      int r,c;      
      printf("enter the number of rows");
      scanf("%d",&r);
      printf("enter the number of col");
      scanf("%d",&c);
      int a[r][c],b[r][c];
      printf("enter the elements");
      for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                  scanf("%d",&a[i][j]);
            }
      }
      for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                  scanf("%d",&b[i][j]);
            }
      }
      int res[r][c];

      for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                  res[i][j]=a[i][j]+b[i][j];
                  printf("%d ",res[i][j]);

            }
            printf("\n");
      }
}