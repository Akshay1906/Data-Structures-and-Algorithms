#include<bits/stdc++.h>
using namespace std;

void selectSort(int arr[] , int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int min_idx = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(arr[min_idx] , arr[i]);
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
    selectSort(arr,n);
     
    return 0;
}