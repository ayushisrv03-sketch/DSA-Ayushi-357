//MISSING NUMBER
#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[6]={1,3,4,5,6};
    for(int i=1;i<=6;i++)
    {
        if((i)!=a[i-1])
        {
            cout<<i<<endl;
            break;
        }
    }
}