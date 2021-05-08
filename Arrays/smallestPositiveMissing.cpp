#include<iostream>
using namespace std;
void sortArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int smallestPositiveMissing(int arr[],int n)
{
    sortArray(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    for(int i=0;i<n;i++)
    {
        if(n==1)
            if(arr[i]!=1)
                return 1;
        if(arr[i]>=0&&i+1<n)
        {
            if(arr[i]!=1&& arr[i-1]<=0)
            {
                if(arr[i]==0)
                    continue;
                else
                    return 1;
            }
            else if(arr[i+1]!=arr[i])
                if(arr[i+1]-arr[i]!=1)
                    return arr[i]+1;
        }
        else if(i==n-1)
            return arr[i]+1;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"\nHow many elements you want to enter::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Missing::"<<smallestPositiveMissing(arr,n);
    return 0;
}
