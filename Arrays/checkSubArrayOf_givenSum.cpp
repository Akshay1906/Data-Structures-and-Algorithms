
#include<iostream>
#include <cmath>
#include <climits>
using namespace std;
bool slidingWindow(int arr[],int n,int givenSum)
{
   int curr_sum=0;
    int left=0;
    int right=0;

    for(right=0;right<=n;right++)
    {

        while(curr_sum>givenSum && left<right-1)
        {
            curr_sum=curr_sum-arr[left];
            left++;
        }
        if(curr_sum==givenSum)
            return true;
        if(right<n)
        {
            curr_sum=curr_sum+arr[right];
        }

    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sum;
    cout<<"\nEnter sum::";
    cin>>sum;
    cout<<"OUTPUT::";
    if(slidingWindow(arr,n,sum)==0)
        cout<<"FALSE";
    else
        cout<<"TRUE";
    return 0;
}
