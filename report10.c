#include<stdio.h>
int main(){
int n,i,j;
printf("Enter the number of elements :");
scanf("%d",&n);
printf("Enter the array elements: ");
int a[n];
   for( i=0;i<n;i++){
scanf("%d",&a[i]);
}
for( i=0;i<n;i++){
    int temp;
    for(j=i+1;j<n;j++){
    if(a[i]<a[j]){
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       }}
     }
    printf("Second smallest element is: %d",a[n-2]);
    printf("\n");
    printf("Second largest element is: %d",a[1]);
    printf("\n");

    if(a[n-2]%2!=0){
      a[n-2]= a[n-2]-2;
    }else{
         a[n-2] = a[n-2]+2;
            }

            float secondlargest;
            if(a[1]%2!=0){
               secondlargest= (float) a[1]/2;
            }else{
                secondlargest=(float) a[1]*2;
            }


    printf("\nmodified smallest element:%d", a[n-2]);
     printf("\n modified largest element:%.2f", secondlargest);
          printf("\n");

printf("Modified array:");
for(i=n-1;i>=0;i--)
if(a[i]==a[1])
{printf("%.2f ",secondlargest);}
 else {printf("%d ",a[i]);
}
    return 0;

}
