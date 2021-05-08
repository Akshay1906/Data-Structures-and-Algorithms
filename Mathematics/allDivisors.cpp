#include<iostream>
using namespace std;
void allDivisors(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
              cout<<i<<"\t";
            if(i!=n/i)
            cout<<n/i<<"\t";
        }

    }
}
int main()
{
    int num;
    cout<<"Enter the number::";
    cin>>num;
    allDivisors(num);
    return 0;
}
