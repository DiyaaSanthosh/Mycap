#include<stdio.h>
void main()
{
  int ch;
  printf("Enter a number between 1 to 5:");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:printf("\n Food item- Burger \n Price-Rs 229");
           break;
    case 2:printf("\n Food item- Brownie \n Price-Rs 88");
           break;
    case 3:printf("\n Food item- Veg nuggets \n Price-Rs 130");
           break;
    case 4:printf("\n Food item- nutella waffle \n Price-Rs 189");
           break;
    case 5:printf("\n Food item- pizza \n Price-Rs 230");
           break;
    default:printf("\n enter the right choice");
  }
  
}
