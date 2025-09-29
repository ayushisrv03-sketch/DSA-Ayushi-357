#include<bits/stdc++.h>
using namespace std;
int z;
struct node{
    int data;
    struct node* next;
};
struct node* start=NULL;
void traverse(struct node* start)
{
    while(start!=NULL)
    {
        cout<<start->data<<" ";
        start=start->next;
    }
    cout<<endl;
}
struct node* getnode()
{
    struct node* p=new node();
    p->next=NULL;
    return p;
}
struct node* InsBeg(struct node* start,int y)
{
    struct node* q=getnode();
    q->data=y;
    q->next=start;
    start=q;
    return start;
}
struct node* InsEnd(struct node* start,int y)
{
    struct node* q=getnode();
    q->data=y;
    if(start==NULL)
    {
        start=q;
    }
    else
    {
        struct node* temp=start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=q;
    }
    return start;
}
struct node * InsAfter(struct node* start,int key,int y)
{
    struct node* q=getnode();
    q->data=y;
    struct node* temp=start;
    while(temp!=NULL && temp->data!=key)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        cout<<"Node with value "<<key<<"is not found";
        return start;
    }
    else{
        q->next=temp->next;
        temp->next=q;
    }
    return start;
}
struct node* DelBeg(struct node* start)
{
        struct node* p;
        p=start;
        z=start->data;
        start=p->next;
        delete(p);
        return start;
}
struct node* DelEnd(struct node* start)
{
    struct node* p;
    struct node* q=NULL;
    p=start;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    int z=p->data;
    q->next=NULL;
    delete(p);
    return start;
}
struct node* DelAfter(struct node* start,int key)
{
    struct node* temp=start;
    while(temp!=NULL && temp->data!=key)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return start;
}
struct node* count(struct node* start)
{
    struct node* ptr=start;
    int c=0;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        c++;
    }
    return start;
}
struct node* Search(struct node* start,int target)
{
    struct node* ptr=start;
    while(ptr!=NULL)
    {
        if(ptr->data==target)
        {
            cout<<"Node found and the data present in it is "<<ptr->data<<endl;
            break;
        }
        else
            ptr=ptr->next;
    }
    return start;
}
int main()
{
    int c,y;
    do{
    cout<<"Enter your choice:\n1.Insertion at Beginning\n2.Insertion at end\n3.Insertion After a Node\n4.Traverse\n5.Deletion from Beginning\n6.Deletion from end.\n7.Deletion after a node.\n8.Counting nodes.\n9.Searching a node.\n10.Exit\n";
    cin>>c;
    switch(c){
        case 1: 
            cout<<"Enter the data:";
            cin>>y;
            start= InsBeg(start,y);
            break;
        case 2:
            cout<<"Enter the data:";
            cin>>y;
            start=InsEnd(start,y);
            break;
        case 3:
            cout<<"Enter the data: ";
            cin>>y;
            int key;
            cout<<"Enter the key of the node after which you want to insert: ";
            cin>>key;
            start=InsAfter(start,key,y);
            break;
        case 4:
            cout<<"The data are: ";
            traverse(start);
            break;
        case 5:
            start=DelBeg(start);
            cout<<"The data of the node which got deleted is: "<<z;
            break;
        case 6:
            start=DelEnd(start);
            cout<<"The data of the node which got deleted is: "<<z;
            break;
        case 7:
            int t;
            cout<<"Enter the key of the node you want to delete: ";
            cin>>t;
            start=DelAfter(start,t);
            break;
        case 8:
            start=count(start);
            cout<<c<<endl;
            break;
        case 9:
            cout<<"Enter the data of the node you want to search:";
            int target;
            cin>>target;
            start=Search(start,target);
            break;
        case 10:
            cout<<"you have exited the code";
            break;
    }}while(c!=10);
}