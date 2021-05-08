#include<iostream>
#include<math.h>

#include<vector>
using namespace std;
void printDivisors( int n)
{
	vector <int> out;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n % i ==0)
		{
			if(i==n/i) // divisors equal
			{
				cout<<i<<" ";	
			}
			else
			{
				cout<<i<<" ";
				out.push_back(n/i);
			}
		}
	}
	for(int i=out.size()-1;i>=0;i--)
		cout<<out[i]<<" ";
}
int main()
{
	int a;
	cout<<"\nEnter any number::";
	cin>>a;
    printDivisors(a);
	return 0;
}
