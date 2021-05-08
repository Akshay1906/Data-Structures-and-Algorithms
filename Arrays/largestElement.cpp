#include<iostream>
using namespace std;
int largest(int ar[],int size)
{
    for(int i=0;i<size;i++)
    {
        bool flag=true;
        for(int j=0;j<size; j++)
        {
            if(ar[j]>ar[i])
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
            return i;
    }
    return -1;
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
    cout<<"Largest element index::"<<largest(arr,n);
    return 0;
}
