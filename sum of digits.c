#include <stdio.h>

int sum(int n)
{
	 if(n!=0)
	  return(n%10+sum(n/10));
	  
	  else
	    return 0;
}

void main()
{
	int a,res;
	printf("Enter a number:");
	scanf("%d",&a);
	res=sum(a);
	printf("sum of digits is %d",res);
}
