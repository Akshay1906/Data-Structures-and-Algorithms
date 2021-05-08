#include<iostream>
using namespace std;
int removeDuplicates(int arr[],int n)
{
   int temp[n];
   int res=1;
   temp[0]=arr[0];
   for(int i=1;i<n;i++)
   {
       if(temp[res-1]!=arr[i])
       {
            temp[res]=arr[i];
            res++;
       }
   }
   for(int i=0;i<res;i++)
    arr[i]=temp[i];
   return res;
}
int main()
{
    int size;
    int arr[10];
    cout<<"\nHow many elements you want to enter::";
    cin>>size;
    for(int i=0;i<size;i++)5

        cin>>arr[i];
    cout<<"Before Removal"<<endl;
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    int k=removeDuplicates(arr,size);
    cout<<"After Removal"<<endl;
    for(int i = 0; i < k; i++)
       cout<<arr[i]<<" ";

    cout<<"\nNew Size= "<<k;
    return 0;
}

