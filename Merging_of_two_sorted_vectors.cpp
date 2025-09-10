//MERGING OF TWO SORTED ARRAYS (OPTIMIZED)

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1={1,2,6};
    vector<int>v2={3,4,5,7};
    vector<int>v;
    int i=0,j=0;
    while(i<3 && j<4)
    {
        if(v1[i]<v2[j])
        {
            v.push_back(v1[i]);
            i++;
        }
        else
        {
            v.push_back(v2[j]);
            j++;
        }
    }
    while(i<3)
    {
        v.push_back(v1[i]);
        i++;
    }
    while(j<4)
    {
        v.push_back(v2[j]);
        j++;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}