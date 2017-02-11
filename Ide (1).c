#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
    a=(a>0)?a:-a;   //to make the inputs positive, if entered negative
    b=(b>0)?b:-b;
    int gcd(int a, int b);
    printf("\nG.C.D of %d and %d is %d",a,b,gcd(a,b));

}

int gcd(int a,int b)
{
     if(b!=0)
     return gcd(b,a%b);  //Implementing Euclid's method
     else
     return a;
}

