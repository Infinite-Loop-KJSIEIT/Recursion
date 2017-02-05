#include <stdio.h>
#include <stdlib.h>


int gcd(int m,int n);
int main()
{
    int m,n;
    printf("enter two integers\n");
    scanf("%d %d",&m,&n);
    printf("the gcd of number is=%d",gcd(m,n));
    return 0;}
    int gcd(int m,int n)
    {
        if(m==0||n==0){
            return 0;}
            else if(m>n){
                m^=n;n^=m;m^=n;
                gcd(m,m%n);
                return m;
            }
               else { gcd(m,n%m);
                return m;}

            }





