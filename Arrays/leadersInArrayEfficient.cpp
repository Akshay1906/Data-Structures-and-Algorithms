#include<iostream>
using namespace std;
void leaders(int arr[],int n)
{
    int temp[n];
    temp[0]=arr[n-1];
    int j=1;
    int curr_ldr=arr[n-1];
    //cout<<curr_ldr<<" ";
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>curr_ldr)
        {
            curr_ldr=arr[i];
            //cout<<curr_ldr<<" ";
            temp[j]=curr_ldr;
            j++;
        }
    }
    for(int i=j-1;i>=0;i--)
        cout<<temp[i]<<" ";

}
int main()
{
    int n;
    cout<<"\nHow many elements you want to enter::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    leaders(arr,n);
    return 0;
}
