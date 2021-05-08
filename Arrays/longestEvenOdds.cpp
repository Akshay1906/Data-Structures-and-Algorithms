#include<iostream>
using namespace std;
int maxEvenOdds(int arr[],int n)
{
    int count=1;
    int res=1;
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0))
        {
            count++;
            res=max(count,res);
        }
        else
            count=1;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"OUTPUT::"<<maxEvenOdds(arr,n);

    return 0;
}
