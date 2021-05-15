#include<bits/stdc++.h>
using namespace std;
void lomutoPartition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int j = l-1;

    for(int i = 0; i < h; i++)
    {
        if(arr[i] < pivot)
        {
            j++;
            swap(arr[i], arr[j]);
        }
    } 
    swap(arr[j+1],arr[h]);
}

int main()
{
    int arr[]  = {10,80,30,90,40,50,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    lomutoPartition(arr,0,n-1);
    for(int x:arr)
        cout<<x<<" ";
    return 0;
}
