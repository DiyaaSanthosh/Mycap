#include<stdio.h>
void main()
{
 int a,b;  // declaration of 2 numbers of integer type
 printf("enter two numbers to be swapped:");
 scanf("%d",&a);  // numbers are inputted from user
 scanf("%d",&b);
 printf("values of a and b before swapping are:%d %d",a,b);  // initial values of typed numbers are displayed
 a=a+b;   //swapping process....
 b=a-b;
 a=a-b;             
 printf("\nvalues of a and b after swapping are:%d %d",a,b);  // swapped values are printed
 }
