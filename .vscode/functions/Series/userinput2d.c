#include<stdio.h>

int main(){
      int i,j,r,c;
      printf("enter the number of rows:");
      scanf("%d",&r);
      printf("enter the number of columns:");
      scanf("%d",&c);
      int arr[r][c];
      printf("enter the elements:");

      for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                  scanf("%d", &arr[i][j]);
            }
      }
      printf("\n");
      for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                  printf("%d ",arr[i][j]);
            }
            printf("\n");
      }
      return 0;

}