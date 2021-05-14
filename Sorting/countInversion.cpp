#include <bits/stdc++.h>
using namespace std;

long long int countandMerge(long long arr[], int l, int m, int r)
{
    long long int n1=m-l+1, n2=r-m;
    long long int left[n1],right[n2];
    for(long long int i=0;i<n1;i++)
        left[i]=arr[i+l];
    for(long long int j=0;j<n2;j++)
        right[j]=arr[m+1+j];    
    long long int res=0;
    long long int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            {arr[k++]=left[i++];}
        else{
            arr[k++]=right[j++];
            res=res+(n1-i);
        }
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];
    return res;
}

long long int countInv(long long arr[],long long int l,long long int r)
{
    long long int res = 0;
    if (l < r)
    {
        long long int m = l + (r-l)/2;
        res += countInv(arr,l,m);
        res += countInv(arr,m+1,r);
        res += countandMerge(arr,l,m,r);
    }
    return res;
}

long long int inversionCount(long long arr[], long long N)
{
   long long int res = 0;
    res = countInv(arr,0,N-1);
    return res;
    
}


int main()
{
    long long arr[]= {2,4,1,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Inversions:: "<<inversionCount(arr,n);
    return 0;
}