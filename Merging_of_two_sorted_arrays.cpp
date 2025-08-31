//MERGING OF TWO SORTED ARRAYS (OPTIMIZED)

#include<iostream>
using namespace std;
int main()
{
    int a[3]={1,2,6};
    int b[4]={3,4,5,7};
    int c[7];
    int i=0,j=0,k=0;
    while(i<3 && j<4)
    {
        if(a[i]<=b[j])
        {
            c[k]= a[i];
            i++;
            k++;
        }
        else
        {
            c[k]= b[j];
            j++;
            k++;
        }
    }
    while(i<3)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<4)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    for(int i=0;i<7;i++)
    {
        cout<<c[i]<<" ";
    }
}