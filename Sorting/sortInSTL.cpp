#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[] = {9,8,7,6,5,4,3};    
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nBefore Sorting ::";
    for(int i : arr)
        cout<<i<<" ";

    sort(arr,arr+n);
    cout<<"\nAfter sorting ::";
    for(int i : arr)
        cout<<i<<" ";

    cout<<"\nSorting in decresing order::";
    sort(arr,arr+n,greater<int>());
     for(int i : arr)
        cout<<i<<" ";
    return 0;
}