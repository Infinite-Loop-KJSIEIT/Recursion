#include <stdio.h>

void main(void) {
	
	int m,n,i,g;
	printf("Enter Two Numbers : ");
	scanf("%d%d",&m,&n);
	
	for(i=1; i<=m && i<=n; ++i)
	{
	    if(m%i==0 && n%i==0)
	    g=i;
	   
	}
	 printf("The gcd of %d and %d is : %d",m,n,g);
}
