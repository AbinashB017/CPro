#include<stdio.h>

int main(){
      int marks;
      printf("enter the marks:");
      scanf("%d", &marks);

      if(marks<30){
            printf("student got C grade");
      }
      else if(marks>=30 && marks<70){
            printf("student got B grade");
      }
      else if(marks>=70 && marks<90){
             printf("student got A grade");
      }
      else{
             printf("student got A+ grade");
      }
      return 0;

  
}