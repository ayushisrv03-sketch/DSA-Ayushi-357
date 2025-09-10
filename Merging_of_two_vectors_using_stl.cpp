#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v1={1,6,7,8};
    vector<int>v2={2,3,4,5,9};
    vector<int>v(v1.size()+v2.size());
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}