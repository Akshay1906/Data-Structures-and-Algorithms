#include<iostream>
using namespace std;
void primeFactors(int n)
{
    if(n<=1)
        return;
    while(n%2==0)
    {
        cout<<2<<"\t";
        n=n/2;
    }
    while(n%3==0)
    {
        cout<<3<<"\t";
        n=n/3;
    }
    for(int i=5;i*i<=n;i+=6)
    {
        while(n%i==0)
        {
            cout<<i<<"\t";
            n=n/i;
        }
        while(n%(i+2)==0)
        {
            cout<<i+2<<"\t";
            n=n/(i+2);
        }
    }
    if(n>3)
        cout<<n;
}


int main()
{
    int num1;
    cout<<"\nEnter the number::";
    cin>>num1;
    primeFactors(num1);
    return 0;
}


