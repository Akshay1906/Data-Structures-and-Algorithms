#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{

    bool swapped ; 
    for(int i = 0; i < n; i++)
    {
        swapped = false;
        for(int j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr [j+1])
            {
                swap(arr[j] , arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
            break;
    }

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
    bubbleSort(arr,n);
     
    return 0;
}