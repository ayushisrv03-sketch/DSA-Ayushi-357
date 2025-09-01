//SET UNION

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[4]={1,7,7,6};
    sort(a,a+4);
    int b[5]={3,8,8,9,4};
    sort(b,b+5);
    int c[9];
    int i=0,j=0,k=0;
    while(i<4 && j<5)
    {
        if(a[i]<b[j])
        {
            if(k==0 || c[k-1]!=a[i])
            {
            c[k]=a[i];
            k++;
            }
            i++;
        }
        else if(b[j]<a[i])
        {
            if(k==0 || c[k-1]!=b[j])
            {
            c[k]=b[j];
            k++;
            }
            j++;
        }
        else
        {
            if(k==0 || c[k-1]!=b[j])
            {
            c[k]=b[j];
            k++;
            }
            i++;
            j++;
        }
    }
    while(i<4)
    {
        if(k==0 || c[k-1]!=a[i])
        {
        c[k]=a[i];
        k++;
        }
        i++;
    }
    while(j<5)
    {
        if(k==0 || c[k-1]!=b[j])
        {
        c[k]=b[j];
        k++;
        }
        j++;
    }
    for(int i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
}