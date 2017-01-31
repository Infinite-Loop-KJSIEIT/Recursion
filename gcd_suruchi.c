#include <stdio.h>
int gcd(int m,int n)
{
    if(n>m)
    return(gcd(n,m));
    else if(n==0)
    return m;
    else
    return(gcd(n,m%n));
}
void main()
{
int m,n;
printf("enter 2 numbers");
scanf("%d %d",&m,&n);
printf("gcd of 2 numbers is:%d",gcd(m,n));
}
