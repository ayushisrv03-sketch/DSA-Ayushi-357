#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Size of vector 1:"<<v.size()<<endl;
    cout<<"Capacity of vector 1 is:"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Size of vector 1:"<<v.size()<<endl;
    cout<<"Capacity of vector 1 is:"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Size of vector 1:"<<v.size()<<endl;
    cout<<"Capacity of vector 1 is:"<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"Size of vector 1:"<<v.size()<<endl;
    cout<<"Capacity of vector 1 is:"<<v.capacity()<<endl;
    v.push_back(9);
    cout<<"Size of vector 1:"<<v.size()<<endl;
    cout<<"Capacity of vector 1 is:"<<v.capacity()<<endl;
    v.push_back(13);
    cout<<"Size of vector 1:"<<v.size()<<endl;
    cout<<"Capacity of vector 1 is:"<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++)
        //cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    cout<<endl;
    //Another way of accessing values without reinitialisation
    for(auto value : v)
        cout<<value<<" ";
    cout <<endl;
    v.pop_back();
    for(auto value : v)
        cout<<value<<" ";
    cout <<endl;

    cout<<"Front Value:"<<v.front()<<" Last value:"<<v.back()<<endl;
    //For insertion
    v.insert(v.begin(),2);
    for(auto value : v)
        cout<<value<<" ";
    cout <<endl;
    v.insert(v.begin()+2,10);
    for(auto value : v)
        cout<<value<<" ";
    cout <<endl;


    cout<<"Size now is:"<<v.size()<<endl;
    cout<<"Capacity now is:"<<v.capacity()<<endl;

    v.insert(v.begin()+4,3,11);
    for(auto value : v)
        cout<<value<<" ";
    cout <<endl;

    //Erasing the first element
    v.erase(v.begin());
    for(auto value : v)
        cout<<value<<" ";
    cout <<endl;

    v.erase(v.begin(),v.begin()+3);
    for(auto value : v)
        cout<<value<<" ";
    cout <<endl;

    //Ways of initializing a vector
    //Using curly braces
    vector<int>v1={2,5,8,9};
    for(auto value : v1)
        cout<<value<<" ";
    cout <<endl;

    //If you want to repeat the same element multiple times (no. of times to be repeated , the number)
    vector<int>v2(3,5);
    for(auto value : v2)
        cout<<value<<" ";
    cout <<endl;

    //USING ITERATOR

    vector<int>::iterator itr;
    for(auto itr=v.begin(); itr!=v.end(); itr++)
    {
        cout<<*(itr)<<" ";
    }
    cout<<endl;

    vector<int>::reverse_iterator rit;
    for(auto rit=v.rbegin(); rit!=v.rend(); rit++)
        cout<<*(rit)<<" ";
    cout<<endl;
}
