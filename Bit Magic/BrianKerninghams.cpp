#include<iostream>
using namespace std;
void countsetBits(int n)
{
    int counter=0;
    while(n!=0)
    {
        n=(n&(n-1));
        counter++;
    }
    cout<<"TOTAL SET BITS:"<<counter;
}
int main()
{
    int num;
    cout<<"\nEnter the number::";
    cin>>num;
    countsetBits(num);
    return 0;
}

