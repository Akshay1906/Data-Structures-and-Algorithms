#include<bits/stdc++.h>
using namespace std;
void hoaresPartition(int arr[], int l, int h)
{
    int i = l-1, j = h+1;
    int pivot = arr[l];
    while(true)
    {
      do{
            i++;
        }while(arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if(i >= j)
            return;
        swap(arr[i],arr[j]);
    }
}

int main()
{
    int arr[]  = {5,3,8,4,2,7,1,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    hoaresPartition(arr,0,n-1);
    for(int x:arr)
        cout<<x<<" ";
    return 0;
}