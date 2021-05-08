#include<iostream>
using namespace std;
int ConsecutiveOnes(bool arr[],int n)
{
  int res=0,curr=0;
  for(int i=0;i<n;i++)
  {
      if(arr[i]==0)
        curr=0;
      else{
        curr++;
        res=max(res,curr);
      }
  }
  return res;
}
int main()
{
    int n;
    cin>>n;
    bool arr[n];
    cout<<"\nEnter the values::";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\nOUTPUT::"<<ConsecutiveOnes(arr,n);
    return 0;
}
