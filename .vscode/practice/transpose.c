#include<stdio.h>
int main(){
      int i,j,r,c;
      printf("enter the rows:");
      scanf("%d",&r);
      printf("enter the cols:");
      scanf("%d",&c);
      int arr[r][c];
      for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                  scanf("%d",&arr[i][j]);
            }
      }
      printf("\n");
      for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                  printf("%d",arr[i][j]);
            }
            printf("\n");
      }
      printf("\n");
      for(i=0;i<c;i++){
            for(j=0;j<r;j++){
                  printf("%d",arr[j][i]);
            }
            printf("\n");
      }


    
      
}