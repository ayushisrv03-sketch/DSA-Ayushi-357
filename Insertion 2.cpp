//INSERTION
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={1,3,4,5};
    int n;
    cout<<"Enter the element you want to insert";
    cin>>n;
    a[4]=n;
    int size= sizeof(a)/sizeof(a[0]);
    sort(a,a+size);
    for(int i=0;i<size;i++)
    {
        cout<<a[i];
    }
}