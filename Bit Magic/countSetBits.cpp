#include<iostream>
using namespace std;
int countSetBits(int n)
{
    int bits=0;
    while(n!=0)
    {
       if(n&1==1)
            bits++;
       n=n>>1;
    }
    return bits;
}
int main()
{
    int num;
    cout<<"Enter the number::";
    cin>>num;
    cout<<"Total SET BITS::"<<countSetBits(num);
    return 0;
}
