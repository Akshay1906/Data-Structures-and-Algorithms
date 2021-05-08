#include<iostream>
using namespace std;
void frequency(int arr[],int n)
{
    int count=1,i;
    for(i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
            count++;
        else
        {
            cout<<arr[i-1]<<" "<<count<<" "<<endl;
            count=1;
        }
    }
    cout<<arr[i-1]<<" "<<count<<endl;
}

int main()
{
    int n;
    cout<<"\nHow many elements you want to enter::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\nOUTPUT\n";
    frequency(arr,n);
    return 0;
}
