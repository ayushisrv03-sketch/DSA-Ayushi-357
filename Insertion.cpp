//INSERTION
#include<iostream>
using namespace std;
int main()
{
    int b,pos;
    int a[6]={1,2,3,4,5};
    cout<<"Enter the element that you want to insert:";
    cin>>b;
    cout<<"Enter the position at which you want to insert:";
    cin>>pos;
    int temp;
    for(int i=4;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=b;
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
}