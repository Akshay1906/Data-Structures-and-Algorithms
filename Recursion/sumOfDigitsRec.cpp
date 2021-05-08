#include<iostream>
using namespace std;
int sumOfDigits(int n)
{
    if(n==0)
        return 0;
    return n%10+sumOfDigits(n/10);
}

int main()
{1
    int num;
    cout<<"\nEnter the number::";
    cin>>num;
    cout<<"\nSum of Digit of "<<num<<":: "<<sumOfDigits(num);
    return 0;
}
