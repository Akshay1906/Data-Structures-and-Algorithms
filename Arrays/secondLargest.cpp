#include<iostream>
using namespace std;
int largest(int ar[],int size)
{
    int res=0;
    for(int i=1;i<size;i++)
    {
        if(ar[i]>ar[res])
            res=i;
    }
    return res;
}
int secondLargest(int ar[],int n)
{
    int max1=largest(ar,n);
    int res=-1;
    for(int i=0;i<n;i++)
    {
        if(ar[i]!=ar[max1])
        {
            if(res==-1)
                res=i;
            else if(ar[i]>ar[res])
                res=i;
        }
    }
    return res;
}
int main()
{
    int arr[10];
    int n;
    cout<<"\nHow many elements you want to enter::";
    cin>>n;
    if(n>10)
    {
        cout<<"Memory full!!!!!";
        return 0;
    }

    for(int i=0;i<n;i++)
            cin>>arr[i];
    cout<<"Second largest element index::"<<secondLargest(arr,n);
    return 0;
}

