#include<bits/stdc++.h>
using namespace std;

void insertSort(int arr[] , int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j >=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    cout<<"\nOUTPUT::";
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[10],n;
    cout << "\nHow many elements you wonna enter::";
    cin >> n;
    cout<<"\nEnter elements::";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    insertSort(arr,n);
     
    return 0;
}