#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n],flag=0,index;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    int target;
    scanf("%d",&target);
    for(int i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            flag=1;
            index=i;
            break;
        }
    }
    if(flag==0)
    printf("Element not found");
    else
    printf("Element found at %d",index);
}