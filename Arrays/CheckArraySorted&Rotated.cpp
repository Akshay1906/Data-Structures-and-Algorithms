/*Given an array arr[] of N distinct integers, check if this array is
Sorted (non-increasing or non-decreasing) and Rotated counter-clockwise.
Note that input array may be sorted in either increasing or decreasing
order, then rotated. A sorted array is not considered as sorted and
rotated, i.e., there should be at least one rotation.*/

/*Example 1:

Input:
N = 4
arr[] = {3,4,1,2}
Output: Yes
Explanation: The array is sorted
(1, 2, 3, 4) and rotated twice
(3, 4, 1, 2).

Input:
N = 3
arr[] = {1,2,3}
Output: No
Explanation: The array is sorted
(1, 2, 3) is not rotated.
*/


#include<iostream>
using namespace std;
bool checkSortedAndRotated(int arr [],int num)
{
   bool left_incr=true;
   bool right_incr=true;
   bool left_decr=true;
   bool right_decr=true;
   bool rotated=true;
   int min_index=0;
    for(int i=1;i<num;i++)
        if(arr[i]<arr[min_index])
            min_index=i;

    for(int i=1;i<min_index;i++)
    {
        if(i<min_index && arr[i]<arr[i-1] )
        {
            left_incr=false;
            break;
        }
    }
    for(int i=min_index;i<num;i++)
        if(i+1<num && arr[i+1]<arr[i])
        {
            right_incr=false;
            break;
        }

    if(left_incr && right_incr)
    {
        if(arr[num-1]<arr[0])
            return rotated;
    }
    else
    {
        for(int i=1;i<=min_index;i++)
            if(arr[i]>arr[i-1] )
            {
                left_decr=false;
                break;
            }
        for(int i=min_index+1;i<num;i++)
            if(i+1<num && arr[i+1]>arr[i])
            {
                right_decr=false;
                break;
            }

            if(left_decr && right_decr)
            {
                if(arr[num-1]>arr[0])
                    return rotated;
            }
    }
    return false;

}
int main()
{
    int n;
    cout<<"How many elements you want to enter::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    bool k=checkSortedAndRotated(arr,n);
    cout<<"\nOUTPUT::";
    if(k==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
