#include<stdio.h>
void main(){
int choise,radius,length,width,base,height;
float area;
printf("Input 1 for area of circle\n");
printf("Input 2 for area of rectangle\n");
printf("Input 3 for area of triangle\n");
printf("Input your choise:");
scanf("%d",&choise);

switch(choise)
    {
   case 1:
     printf("Input radius of the circle: ");
     scanf("%d",&radius);
     area=3.14*radius*radius;
     break;
  case 2:
       printf("Input length and width of the rectangle: ");
     scanf("%d%d",&length,&width);
     area=length*width;
     break;


  case 3:
        printf("Input base and height of the triangle: ");
     scanf("%d%d",&base,&height);
     area=.5*base*height;
     break;
}

   printf("The area is :%f\n",area);

   }
