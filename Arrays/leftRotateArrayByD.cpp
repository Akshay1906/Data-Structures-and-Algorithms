#include<iostream>
using namespace std;
void leftRotateBy_D(int arr[],int n,int d)
{
    int temp[d],i,j;
    for(j=0;j<d;j++)
        temp[j]=arr[j];
    for(i=0;i+d<n;i++)
        arr[i]=arr[i+d];
    j=0;
    while(j<d)
    {
        arr[i]=temp[j];
        j++;i++;
    }

}
int main()
{
    int n,d;
    cout<<"How many elements you want to enter::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\nBEFORE ROTATE::";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\nEnter D::";
    cin>>d;
    leftRotateBy_D(arr,n,d);
     cout<<"\nAFTER ROTATE::";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
