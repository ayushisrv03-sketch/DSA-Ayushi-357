#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[5]={1,5,3,6,2};
    int b[4]={1,3,7,8};
    sort(a,a+5);
    sort(b,b+4);
    int i=0,j=0,k=0;
    int c[5];
    while(i<5 && j<4)
    {
        if(a[i]!=b[j])
        {
            c[k]=a[i];
            k++;
            i++;
            j++;
        }
        else
        i++;
    }
    for(int i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
}