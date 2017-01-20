#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    if (y==0)
        return x;
    else
        gcd(y,x%y); //to implement Euclid's Method
}
int main()
{
    int a,b,g;
    char ans;
    do{
    cout<<"Enter Two Integers:\n";
    cin>>a>>b;

    g=gcd(a,b);
    if (g<0) // makes g positive if negative
    {
        g=-1;
    }
    //OUTPUT
    cout<<"GCD is:"<<g;
    //if user wants to know more
    cout<<"\nWant to know more ?(y/n)";
    cin>>ans;
    }while(ans=='y');
    return 0;
}

