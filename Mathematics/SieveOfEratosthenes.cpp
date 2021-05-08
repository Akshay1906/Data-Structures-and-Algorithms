#include<iostream>
#include<vector>
using namespace std;
void sieve(int n)
{
    vector<bool> arr(n+1,true);
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i])
        {
            for(int j=i*2;j<=n;j=j+i)  //for optimization replace i*2 to i*i
            {
                arr[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(arr[i])
            cout<<i<<"\t";
    }
}
int main()
{
    int num;
    cout<<"\nEnter the number::";
    cin>>num;
    sieve(num);
    return 0;
}
