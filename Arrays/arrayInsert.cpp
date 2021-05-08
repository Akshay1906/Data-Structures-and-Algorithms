#include<iostream>
using namespace std;
void insertAt(int ar[],int Size,int index,int value)
{
    if(Size==10)
    {
        cout<<"\nOUT OF BOUND!!!!!";
        exit(0);
    }

    else
    {
        for(int i=Size-1;i>=index;i--)
            ar[i+1]=ar[i];
        ar[index]=value;
        cout<<"\nInsertion Successfull.....";
    }
    cout<<"OUTPUT"<<endl;
    for(int i=0;i<Size+1;i++)
        cout<<ar[i]<<" ";
}

int main()
{
    int arr[10];
    int n,pos,element;
    cout<<"\nHow many elements you want to enter::";
    cin>>n;
    if(n>10)
    {
        cout<<"Memory full!!!!!";
        return 0;
    }

    for(int i=0;i<n;i++)
            cin>>arr[i];
    cout<<"\nEnter the index::";
    cin>>pos;
    cout<<"\nEnter the value::";
    cin>>element;
    insertAt(arr,n,pos,element);
    return 0;
}
