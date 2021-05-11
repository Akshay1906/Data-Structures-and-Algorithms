#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int b[], int m, int n)
{
    int p1=0,p2=0;
    while(p1 < m  && p2 < n)
    {
        if(a[p1] <= b[p2])
        {
            cout << a[p1] << " ";
            p1++;
        }
        else
        {
            cout<< b[p2]<<" ";
            p2++;
        } 
            
    }
    while(p2 < n)
    {
        cout<<b[p2]<<" ";
        p2++;
    }
    while(p1 < m)
    {
        cout<<a[p1]<<" ";
        p1++;
    }

}

int main()
{
    int a[] = {10,20,50};
    int b[] = {5,50,50};
    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);
    merge(a,b,m,n);
    return 0;
}