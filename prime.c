#include <stdio.h>

int isprime(int n,int i)
{
     while(i<n)
     {
         if(n%i!=0)
          return(isprime(n,i+1));
         else if(n%i==0)
           return 0;
     }
     return 1;
}

void main()
{
    
    int r,a;
    printf("Enter a number:");
    scanf("%d",&a);
    
	r=isprime(a,2);
    if(r==0)
    printf("composite number");
    else if(r==1)
       printf("prime number");
}
