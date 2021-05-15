#include<bits/stdc++.h>
using namespace std;

int lomutoPartition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int j = l-1;
    for(int i = l; i < h; i++)
    {
        if(arr[i] < pivot)
        {
            j++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j+1],arr[h]);
    return j+1;
}
void quickSort(int arr[], int l, int h)
{
    if(l < h)
    {
        int p = lomutoPartition(arr,l,h);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,h);
    }
}
int main()
{
    int arr[] = {8,4,7,9,3,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
   
    for(int x: arr)
        cout << x <<" ";
    return 0; 
}