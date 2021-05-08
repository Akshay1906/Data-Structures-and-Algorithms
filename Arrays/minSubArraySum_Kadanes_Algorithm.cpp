#include<iostream>
using namespace std;
int minSubArray(int arr[],int n)
{
    int sum=arr[0];
    int curr=arr[0];
    for(int i=1;i<n;i++)
    {
        curr=min(curr+arr[i],arr[i]);
        sum=min(curr,sum);
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"OUTPUT::"<<minSubArray(arr,n);

    return 0;
}
