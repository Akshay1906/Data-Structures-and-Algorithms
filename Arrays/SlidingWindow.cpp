
#include<iostream>
#include <cmath>
#include <climits>
using namespace std;
int slidingWindow(int arr[],int n,int k)
{
   int curr_sum=0;
   for(int i=0;i<k;i++)
    curr_sum+=arr[i];
   int max_sum=curr_sum;
   for(int i=k;i<n;i++)
   {
        curr_sum=curr_sum+arr[i]-arr[i-k];
        max_sum=max(curr_sum,max_sum);
   }
    return max_sum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cout<<"\nEnter k::";
    cin>>k;
    cout<<"OUTPUT::"<<slidingWindow(arr,n,k);
    return 0;
}
