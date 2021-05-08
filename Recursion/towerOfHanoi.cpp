#include<iostream>
using namespace std;
void TOH(int n,char T1,char T2, char T3)
{
   if(n==1)
   {
       cout<<"Move 1 from "<<T1<<" to "<<T3<<endl;
       return;
   }
    TOH(n-1,T1,T3,T2);
        cout<<"Move "<<n<<" from "<<T1<<" to "<<T3<<endl;
    TOH(n-1,T2,T1,T3);
}
int main()
{
    TOH(4,'A','B','C');
    return 0;
}
