#include<iostream>
using namespace std;
int equilibrium(int arr[],int n)
{
	int sum=0, l_sum=0;
	for(int i=0;i<n;i++)
		sum+=arr[i];
		
	for(int i=0;i<n;i++)
	{
		if(l_sum==sum-arr[i])
			return i;
		l_sum+=arr[i];
		sum-=arr[i];
	}	
	return -1;
}

int main()
{
    int n;
    cout<<"How many elements you want to enter::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k=equilibrium(arr,n);
    cout<<"\nOUTPUT::";
    cout<<k;
    return 0;
}


