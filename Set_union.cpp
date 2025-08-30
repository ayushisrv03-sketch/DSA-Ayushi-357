//SET UNION

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[4]={2,4,8,3};
    sort(a,a+4);
    int b[5]={1,5,8,9,6};
    sort(b,b+5);
    int c[9];
    int i=0,j=0,k=0;
    while(i<4 && j<5)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else if(b[j]<a[i])
        {
            c[k]=b[j];
            j++;
            k++;
        }
        else
        {
            c[k]=b[j];
            i++;
            j++;
            k++;
        }
    }
    while(i<4)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<5)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    for(int i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
}