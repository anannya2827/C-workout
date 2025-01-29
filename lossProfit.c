#include<stdio.h>
int main(){
   float cost,mrp,result;
   printf("Enter the cost price:");
   scanf("%f",&cost);
   printf("Enter the market price:");
   scanf("%f",&mrp);
   if(mrp>cost){
      printf("Seller made a profit");
      result=mrp-cost;
      printf("\nFor every product he sold,he made a profit of %f Rs",result);
   }
   else{
      printf("Seller incurred a loss");
      result=cost-mrp;
      printf("\nFor every product he sold,he incurred a loss of %f Rs",result);
   }
 return 0;
}
