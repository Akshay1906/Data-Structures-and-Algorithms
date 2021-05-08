#include<iostream>
using namespace std;
bool checkPrime(int p)
{

    if(p==1)
        return false;
    if(p==2 || p==3)
        return true;
    if(p%2==0 || p%3==0)
            return false;
    for(int i=5;i*i<=p;i+=6)
        if(p%i==0 || p%(i+2)==0)
            return false;
    return true;
}

void primeFactors(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(checkPrime(i))
        {
            if(i%n==0)
            {
                cout<<n;
                return;
            }
            int x=i;
            while(n%x==0)
            {
                cout<<i<<"\t";
                x=x*i;
            }
        }
    }
}


int main()
{
    int num1;
    cout<<"\nEnter the number::";
    cin>>num1;
    primeFactors(num1);
    return 0;
}

