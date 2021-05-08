#include<iostream>
using namespace std;
void primeFactors(int n)
{
    if(n<=1)
        return;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            cout<<i<<"\t";
            n=n/i;
        }
    }
    if(n>1)
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

