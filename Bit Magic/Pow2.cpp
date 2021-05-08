#include<iostream>
using namespace std;
void Pow2(int n)
{
    int counter=0;
    while(n!=0)
    {
        n=(n&(n-1));
        counter++;
    }
    if(counter!=1)
        cout<<"NOT";
    else
        cout<<"YES";
}
int main()
{
    int num;
    cout<<"\nEnter the number::";
    cin>>num;
    Pow2(num);
    return 0;
}

