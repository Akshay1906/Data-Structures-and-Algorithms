#include<iostream>
using namespace std;
void reverseArray(int ar[],int size)
{
    int k=size-1;
    for(int i=0;i<size;i++)
    {
        if(k>i)
        {
            int temp=ar[i];
            ar[i]=ar[k];
            ar[k]=temp;
            k--;
        }

    }
    for(int i=0;i<size;i++)
        cout<<ar[i]<<" ";
}
int main()
{
    int arr[10];
    int n;
    cout<<"\nHow many elements you want to enter::";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    reverseArray(arr,n);
    return 0;
}
