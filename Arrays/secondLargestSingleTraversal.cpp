#include<iostream>
using namespace std;
int secondLargest(int ar[],int size)
{
    int res=-1;
    int largest=0;
    for(int i=1;i<size;i++)
    {
        if(ar[largest]<ar[i])
        {
            res=largest;
            largest=i;
        }
        else if(ar[i]!=ar[largest])
        {
            if(res==-1||ar[res]<ar[i])
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

