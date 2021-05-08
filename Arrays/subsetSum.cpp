#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int arr[]={5,2,3,6};
    int length=4;
    int sum=8;
    int subsetSum=0;
    int total=pow(2,length);
    for(int counter=0;counter<total;counter++)
    {
        int Count=0;
        cout<<"{";
        for(int j=0;j<length;j++)
        {
            if((counter&(1<<j))!=0)
            {
                cout<<arr[j]<<" ";
                Count=Count+arr[j];

            }
        }
        if(Count==sum)
            subsetSum++;
        cout<<"}";
        cout<<"\n";

    }
    cout<<"Subset  Sum = "<<subsetSum;
    return 0;
}
