#include<iostream>
using namespace std;
void deleteAt(int ar[],int Size,int value)
{


    for(int i=0;i<Size;i++)
    {
        if(ar[i]==value)
        {
            for(int k=i;k<Size-1;k++)
                ar[k]=ar[k+1];
            cout<<"DELETION SUCCESSFULL.........";
            break;
        }
        else
        {
            cout<<"Element NOT FOUND ";
            break;
        }
    }
    for(int i=0;i<Size-1;i++)
        cout<<ar[i]<<" ";
}

int main()
{
    int arr[10];
    int n,element;
    cout<<"\nHow many elements you want to enter::";
    cin>>n;
    if(n>10)
    {
        cout<<"Memory full!!!!!";
        return 0;
    }

    for(int i=0;i<n;i++)
            cin>>arr[i];

    cout<<"\nEnter the value to delete::";
    cin>>element;
    deleteAt(arr,n,element);
    return 0;
}
