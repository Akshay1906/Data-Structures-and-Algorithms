#include<iostream>
using namespace std;
void minFlips(bool arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]!=arr[i])
        {
            if(arr[i]!=arr[0])
                cout<<"From "<<i<<" to ";
            else
                cout<<i-1<<endl;
        }
        if(arr[n-1]!=arr[0])
            cout<<n-1<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    bool arr[n];
    cout<<"\nEnter 0 and 1::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"OUTPUT::";
    minFlips(arr,n);
    return 0;
}
