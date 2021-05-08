#include<iostream>
#include<math.h>
using namespace std;
void powerset(string str)
{
    int n=str.length();
    int str_size=pow(2,n);
    for(int counter=0;counter<str_size;counter++)
    {
        for(int j=0;j<n;j++)
        {
            if((counter&(1<<j))!=0)
                cout<<str[j];
        }
        cout<<"\n";
    }

}
int main()
{
   string st;
   cout<<"Enter the string::";
   cin>>st;
   powerset(st);
   return 0;
}
