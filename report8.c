#include<stdio.h>
int main(){
int size,i,target;
printf("Enter the size of an array:");
scanf("%d",&size);
int array[size];
printf("Enter %d elements:",size);
 for(i=0;i<size;i++){
    scanf("%d",&array[i]);
  }
  printf("Enter the Target value:");
  scanf("%d",&target);
  for(i=0;i<size;i++){
    if(array[i]==target){
       printf("%d Found at location %d",target,i+1);
   break;
    }
  }
  if(i==size){
   printf("Not Found");
  }
}
