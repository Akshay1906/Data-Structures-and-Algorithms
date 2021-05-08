#include<iostream>
using namespace std;
bool checkPrime(int n)
{
    if(n==1)
        return false;
    for(int i=2;i<n;i++)
        if(n%i==0)
            return false;
    else
        return true;
}
int main()
{
    int num1;
    cout<<"\nEnter the number::";
    cin>>num1;
    int f=checkPrime(num1);
    if(f==0)
        cout<<"NOT PRIME"<<endl;
    else
        cout<<"PRIME"<<endl;
    return 0;
}
