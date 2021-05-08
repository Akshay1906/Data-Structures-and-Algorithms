#include<iostream>
using namespace std;
int countsetBits(int n)
{
    int counter=0;
    while(n!=0)
    {
        n=(n&(n-1));
        counter++;
    }
    return counter;
}
int main()
{
    int num=17,counter=0;
    for(int i=1;i<=num;i++)
    {
        counter=counter+countsetBits(i);
    }
    cout<<"Set Bits:"<<counter;
}
