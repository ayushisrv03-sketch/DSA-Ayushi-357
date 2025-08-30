//DELETION
#include<iostream>
using namespace std;
int main()
{
    int a[6]={1,2,3,4,5,6};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<"Enter the position of the number you want to delete:";
    int b;
    cin>>b;
    for(int i=b;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    for(int i=0;i<size-1;i++)
    {
        cout<<a[i]<<" ";
    }
}