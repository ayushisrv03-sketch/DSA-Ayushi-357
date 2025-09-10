#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   vector<int>v;
   int value;
   cout<<"Enter elements:";
    while(true)
    {
        cin>>value;
        if(value==-1)
            break;
        v.push_back(value);
    }
    sort(v.begin(),v.end());
    cout<<"Enter the number you want to search:";
    int target;
    cin>>target;
    if(binary_search(v.begin(),v.end(),target))
        {
            cout<<"Element Found";
        }
    else
        {
            cout<<"Not found";
        }
}