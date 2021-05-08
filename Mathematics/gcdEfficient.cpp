#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a<b)
            b=b-a;
        else
            a=a-b;
    }
    return a;
}
int main()
{
    int num1,num2;
    cout<<"\nEnter two numbers::";
    cin>>num1>>num2;
    cout<<"GCD::"<<gcd(num1,num2);
    return 0;
}
