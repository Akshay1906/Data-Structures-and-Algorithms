#include<bits/stdc++.h>
using namespace std;
void naivePartition(int arr[], int l,int h,int p)
{
    int temp[h-l+1], index = 0;

    for(int i = l; i <= h; i++)
    {
        if(arr[i] <= arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for(int i = l; i <= h; i++)
    {
        if(arr[i] > arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for(int i = l; i <=h; i++)
        arr[i] = temp[i-l];
}

int main()
{
    int arr[] = {8,4,7,9,3,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    naivePartition(arr,0,n-1,n-1);
    for(int x: arr)
        cout << x <<" ";
    return 0; 
}