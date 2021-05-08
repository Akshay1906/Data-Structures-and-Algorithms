#include<iostream>
using namespace std;
int maxSubArray(int arr[],int n)
{
    int res=arr[0];
    int curr=arr[0];
    for(int i=1;i<n;i++)
    {
        curr=max(curr+arr[i],arr[i]);
        res=max(res,curr);
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
    cout<<"OUTPUT::"<<maxSubArray(arr,n);

    return 0;
}
