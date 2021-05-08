#include<iostream>
using namespace std;
int maxSubArray(int arr[],int n,int k)
{
    int count=0;
    int prod=1;
    int left=0;
    int right;
    for(right=0;right<=n;right++)
    {
        prod=prod*arr[right];
        while(prod>k && right<n)
        {
            prod=prod/arr[left];
            left++;
        }
        if(prod<k)
        {
            int len=right-left+1;
            count+=len;
        }

    }

    return count;
}
int main()
{
    int n,k;
    cin>>n;
    int arr[n];


        cout<<"\nEnter the elements::";
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<"\nEnter product::";
        cin>>k;
        cout<<"OUTPUT::"<<maxSubArray(arr,n,k);

        return 0;
}
