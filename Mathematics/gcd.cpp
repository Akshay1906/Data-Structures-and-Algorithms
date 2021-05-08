#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    int res=min(a,b);
    while(res>0)
    {
        if(a%res==0 && b%res==0)
            break;
        res--;
    }
    return res;
}
int main()
{
    int num1,num2;
    cout<<"\nEnter two numbers::";
    cin>>num1>>num2;
    cout<<"GCD::"<<gcd(num1,num2);
    return 0;
}
