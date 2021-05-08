#include<iostream>
using namespace std;
void moveZeroes_to_End(int arr[],int n)
{
   int count=0;
   for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
        }
    }
}
int main()
{
    int arr[10];
    int n;
    cout<<"\nHow many elements you want to enter::";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\nINPUT::";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    moveZeroes_to_End(arr,n);
    cout<<"\n\nOUTPUT::";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
