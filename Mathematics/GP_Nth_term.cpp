#include<iostream>
#include<math.h>
using namespace std;
double GP(int a,int b,int n)
{

    float r;
    r=float(float(b)/float(a));
    cout<<"ratio ::"<<r<<endl;
    return (a*pow(r,n-1));
}
int main()
{
    cout<<"term::"<<GP(72,37,2);
    return 0;
}

