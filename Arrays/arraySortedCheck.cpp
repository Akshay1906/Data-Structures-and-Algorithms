#include<iostream>
using namespace std;
bool sortCheck(int arr[],int n)
{
   if(n==1)
        return true;
   else
   {
       for(int i=0;i<n;i++)
            if(arr[i]>arr[i+1])
                return false;
   }
    return true;
}
int main()
{
    int size;
    int ar[10];
    cout<<"\nHow many elements you want to enter::";
    cin>>size;
    for(int i=0;i<size;i++)
        cin>>ar[i];
    int k=sortCheck(ar,size);
    if(k==0)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    return 0;
}

