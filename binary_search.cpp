#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            else
            continue;
        }
    }
    cout<<"Enter the number you want to search:";
    int target;
    cin>>target;
    int l=0,h=n-1;
    int mid;
    bool flag=false;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==target)
        {
            flag=true;
            break;
        }
        else if(a[mid]<target)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    if(flag)
        cout<<"Element found at "<<mid<<" position";
    else
        cout<<"Not found";
}