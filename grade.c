#include<stdio.h>
void main()
{
   float marks;     
   char grade;
  printf("enter the score:");
    scanf("%f",&marks);
  if (marks>=85 && marks<=100)
    grade='A';
  else if(marks>=70 && marks<85)
    grade='B';
       else if(marks>=55 && marks<70)
         grade='C';
            else if(marks>=40 && marks<55)
              grade='D';
                  else 
                    grade='F';
 printf("Grade %c",grade);
}
  
