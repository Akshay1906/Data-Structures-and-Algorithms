#include<iostream>
using namespace std;
int onlyOdd_occuring(int ar[],int N)
{
   int res=0;
   for(int i=0;i<N;i++)
    res=res^ar[i];
   return res;
}
int main()
{
    int n;
    cout<<"\nHow many elements you want to enter::";
    cin>>n;
    int arr[n];
    cout<<"\nEnter th elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"OUTPUT::"<<onlyOdd_occuring(arr,n);
    return 0;
}
