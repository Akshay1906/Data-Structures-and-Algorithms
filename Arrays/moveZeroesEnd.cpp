#include<iostream>
using namespace std;
void moveZeroes_to_End(int arr[],int n)
{
   int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]==0)
            {
                if(j+1<n)
                {
                   temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }

            }
        }
    }

}
int main()
{
    int arr[10];
    int n;
    cout<<"\nHow many elements you want to enter::";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\nINPUT::";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    moveZeroes_to_End(arr,n);
    cout<<"\n\nOUTPUT::";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
