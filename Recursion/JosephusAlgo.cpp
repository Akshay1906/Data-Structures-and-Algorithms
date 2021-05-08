#include<iostream>
using namespace std;

int josephus(int n,int k)
{
    if(n==1)
        return 0;
    return(josephus(n-1,k)+k)%n;
}
int main()
{
    int N,K;
    cout<<"\nEnter no of people::";
    cin>>N;
    cout<<"\nEnter every person to be killed::";
    cin>>K;
    cout<<josephus(N,K)+1<<" is the survivor";
    return 0;
}
