#include<iostream>
using namespace std;
int maxCircularSubArray(int arr[],int n)
{
    int max_sum=arr[0];
    for(int i=0;i<n;i++)
    {
        int curr_sum=arr[i];
        int curr_max=arr[i];
        for(int j=1;j<n;j++)
        {
            int index=(i+j)%n;
            curr_sum=curr_sum+arr[index];
            curr_max=max(curr_sum,curr_max);
        }
        max_sum=max(max_sum,curr_max);

    }
    return max_sum;

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"OUTPUT::"<<maxCircularSubArray(arr,n);

    return 0;
}
