#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0)
        return 1;

    return n*factorial(n-1);
}

int main()
{
    int num;
    cout<<"\nEnter the number::";
    cin>>num;
    cout<<"Factorial is::"<<factorial(num);
    return 0;
}
