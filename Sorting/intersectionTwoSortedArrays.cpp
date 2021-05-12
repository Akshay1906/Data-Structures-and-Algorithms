#include<bits/stdc++.h>
using namespace std;
void intersection(int a[], int b[], int n1, int n2)
{
    int p1 = 0, p2 = 0;
    while(p1 < n1 && p2 < n2)
    {
        if(p1 > 0 && a[p1-1] == a[p1])
        {
            p1++;
            continue;
        }
        
        if(a[p1] < b[p2])
        {
            p1++;
        }
        else if(a[p1] == b[p2])
        {
            cout<< a[p1] <<" ";
            p1++;
            p2++;
        }
        else
            p2++;
        
    }

}

int main()
{
    int a[] = {3,5,10,10,10,15,15,20};
    int b[] = {5,10,10,15,30};

    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);

    intersection(a,b,n1,n2);
    return 0;
}