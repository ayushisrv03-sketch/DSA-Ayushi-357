#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
node* create(node* start,int x)
{
    node* n=new node();
    n->data=x;
    
    if(start==NULL)
    {
        start=n;
    }
    node* ptr= start;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=n;
    n->next=NULL;
    return start;
}
void traversal(node* start)
{
    node* ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node* start= NULL;
    cout<<"Enter the number of nodes: ";
    int n;
    cin>>n;
    while(n--)
    {
    int x;
    cout<<"Enter the data for node: ";
    cin>>x;
    start=create(start,x);
    }
    traversal(start);
}