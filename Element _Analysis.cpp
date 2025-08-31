//Element Analysis (using buffer array)
#include<iostream>
using namespace std;
int main()
{
    int a[7]={1,2,3,4,1,2,3};
    int n=7;
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    int buffer[max+1];
    for(int i=0;i<=max;i++)
    {
        buffer[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        buffer[a[i]]++;
    }
    for(int i=0;i<=max;i++)
    {
        if(buffer[i]!=0)
        {
            cout<<"Count of "<<i<<" is "<<buffer[i]<<endl;
        }
    }
}