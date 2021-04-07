#include<stdio.h>
int temp=1;

int lcm(int a,int b)
{
     temp++;
     if(temp % a==0 && temp % b==0)
      return temp;
          
    else
          return(lcm(a,b));
 
 return a*b;
}

void main()
{
    int x,y,l;
    printf("enter 2 numbers:");
    scanf("%d %d",&x,&y);
    l=lcm(x,y);
    printf("lcm is: %d",l);
    
}
