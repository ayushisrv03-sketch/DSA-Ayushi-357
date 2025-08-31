#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the size of set 1:";
    cin>>n;
    cout<<"Enter the size of set 2:";
    cin>>m;
    int a[n],b[m];
    cout<<"Enter elements for set 1:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<"Enter elements for set 2:";
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(b,b+m);
    int i=0,j=0,k=0;
    int s=max(n,m);
    int c[s];
    while(i<n && j<m)
    {
        if(a[i]==b[j])
        {
            c[k]=a[i];
            k++;
            i++;
            j++;
        }
        else if(a[i]<b[j])
        i++;
        else
        j++;
    }
    for(int i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
}