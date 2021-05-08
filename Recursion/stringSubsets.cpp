#include<iostream>
using namespace std;
void subSets(string str,string curr,int index)
{
    if(index==str.length())
    {
        cout<<curr<<" ";
        return;
    }

    subSets(str,curr,index+1);
    subSets(str,curr+str[index],index+1);
}
int main()
{
    string st="ABC";
    int length=st.length();
    int initial=0;
    subSets(st,"",0);
    return 0;
}
