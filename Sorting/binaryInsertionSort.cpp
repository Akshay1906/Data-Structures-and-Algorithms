#include<bits/stdc++.h>
using namespace std;
int binSearch(int arr[], int item, int low, int high)
{
    int loc;
    while(low <= high){
        int mid = (low + high)/2;
        if(item > arr[mid]){
            low = mid+1;
            loc = low;
        }
        if(item < arr[mid]){
            high = mid-1;
            loc = mid;
        } 
        if(item == arr[mid])
            return mid+1;
    }
    return loc;
}       
void insertSort(int arr[],int n)
{
    int loc;
    for(int i = 1 ; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;
        loc = binSearch(arr,key,0,j);

        while(j >= loc)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[loc] = key;
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