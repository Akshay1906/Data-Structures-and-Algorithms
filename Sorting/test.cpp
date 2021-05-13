#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int m, int h)
{
	int n1 = m - l + 1;
	int n2 = h - m;

	int left[n1],right[n2];
	for(int i = 0; i < n1; i++ )
		left[i] = arr[l+i];

	for(int i = 0; i < n2; i++ )
		right[i] = arr[n1 + i];

	cout<<"\narr1 : ";
	for(int i =0; i< n1;i++)
		cout << left[i] <<" ";

	cout<<"\narr2 : ";
	for(int i = 0; i< n2;i++)
		cout << right[i] <<" ";


	int i = 0, j = 0 ,k = 0;
	while(i < n1 && j < n2)
	{
		if(left[i] <= right[j])
		{
			arr[k] = left[i]; i++; k++;
		}
		else{
			arr[k] = right[j];
			j++; k++;
		}
	}
	while(i < n1){
		arr[k] = left[i];
		i++;k++;
	}
	while(j < n2){
		arr[k] = right[j];
		k++;j++;
	}
}
int main()
{
	int arr[] = {2,3,7,9,2,3,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);

	int l = 0, h = n-1;
	int mid = l + (h-l)/2;

	merge(arr,l,mid,h);
	cout<<"\nOUTPUT::";
	for(int i =0; i<n; i++)
		cout<<arr[i]<<" ";
	return 0;
}