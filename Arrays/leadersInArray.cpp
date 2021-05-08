#include<iostream>
using namespace std;
void leaders(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
                break;
            if(j==n-1)
                cout<<arr[i]<<" ";

        }
        if(i==n-1)
            cout<<arr[i];
    }
}
int main()
{
    int n;
    cout<<"\nHow many elements you want to enter::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    leaders(arr,n);
    return 0;
}
