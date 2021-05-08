#include<iostream>
#include<math.h>
using namespace std;
int maximum(int n1,int n2,int n3)
{
    if(n1>n2 && n1>n3)
        return n1;
    else if(n2>n2 && n2>n3)
        return n2;
    return n3;
}
int maxCuts(int n,int a,int b,int c)
{
    if(n<0)
        return -1;
    if(n==0)
        return 0;
    int res=maximum(maxCuts(n-a,a,b,c),maxCuts(n-b,a,b,c),
                    maxCuts(n-c,a,b,c));
    if(res==-1)
        return -1;
    return res+1;
}
int main()
{
    int length,val1,val2,val3;
    cin>>length>>val1>>val2>>val3;
    cout<<"OUTPUT::"<<maxCuts(length,val1,val2,val3);
    return 0;
}
