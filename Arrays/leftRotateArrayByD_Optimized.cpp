#include<iostream>
using namespace std;
void rev(int arr[],int low,int high)
{
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
void leftRotateBy_D(int arr[],int n,int d)
{
   rev(arr,0,d-1);
   rev(arr,d,n-1);
   rev(arr,0,n-1);
}
int main()
{
    int n,d;
    cout<<"How many elements you want to enter::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\nBEFORE ROTATE::";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\nEnter D::";
    cin>>d;
    leftRotateBy_D(arr,n,d);
     cout<<"\nAFTER ROTATE::";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
