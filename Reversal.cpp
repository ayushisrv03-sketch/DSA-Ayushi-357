//REVERSAL OF ARRAY
#include<iostream>
using namespace std;
int main()
{
    int a[7]={1,2,3,4,5,6,7};
    int n= sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n/2;i++)
    {
        int temp=a[n-1-i];
        a[n-1-i]=a[i];
        a[i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}