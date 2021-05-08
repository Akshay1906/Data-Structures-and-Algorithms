#include<iostream>
using namespace std;
void leftRotateByOne(int arr[],int n)
{
    int i,temp=arr[0];
    for(i=0;i<n;i++)
        arr[i]=arr[i+1];
    arr[i-1]=temp;
}
int main()
{
    int n;
    cout<<"How many elements you want to enter::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\nBEFORE ROTATE::";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    leftRotateByOne(arr,n);
     cout<<"\nAFTER ROTATE::";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
