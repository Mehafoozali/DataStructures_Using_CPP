#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
int main()
{
    cout<<"Enter the  first node :"<<endl;
    int a;
    cin>>a;
    node *head=new node(a);
    cout<<"Enter the  second node :"<<endl;
    int b;
    cin>>b;
    node *temp1=new node(b);
    cout<<"Enter the  third node :"<<endl;
    int c;
    cin>>c;
    node *temp2=new node(c);
    head->next=temp1;
    temp1->next=temp2;
    node *temp=head;
    cout<<"Current elements in the linkedlist"<<endl;
    while(temp!=NULL)
    {
        cout<<" "<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"Enter the node to insert at begin :"<<endl;
    int d;
    cin>>d;
    node *insert=new node(d);
    insert->next=head;
    head=insert;
    node *tem=head;
    cout<<"Current elements in the linkedlist after inserting an element"<<endl;
    while(tem!=NULL)
    {
        cout<<" "<<tem->data<<"-->";
        tem=tem->next;
    }
    cout<<endl;
    cout<<"Enter the Element that we need to insert at end"<<endl;
    int e;
    cin>>e;
    node *temp4=new node(e);
    if(head==NULL)
    {
        head=temp4;
    }
    else
    {
        node *temp5=head;
        while(temp5->next!=NULL)
        {
            temp5=temp5->next;
        }
        temp5->next=temp4;
    }
    node *tem1=head;
    cout<<"Current elements in the linkedlist after inserting an element at end"<<endl;
    while(tem1!=NULL)
    {
        cout<<" "<<tem1->data<<"-->";
        tem1=tem1->next;
    }
    cout<<endl;

    cout<<"Now we are deleting the begining node"<<endl;
    cout<<"--------------------------"<<endl;
    if(head==NULL)
    {
        head=NULL;
    }
    else
    {
        node *tem2=head->next;
        delete head;
        head=tem2;
    }

    node *tem3=head;
    cout<<"Current elements in the linkedlist after deleting an element at beginning"<<endl;
    while(tem3!=NULL)
    {
        cout<<" "<<tem3->data<<"-->";
        tem3=tem3->next;
    }
    cout<<endl;
    cout<<"Now we are deleting the node at end "<<endl;
    if(head==NULL)
    {
        head=NULL;
    }
    else if(head->next==NULL)
    {
        delete head;
        head=NULL;
    }
    else
    {
        node *tem4=head;
        while(tem4->next->next!=NULL)
        {
            tem4=tem4->next;
        }
        delete temp4->next;
        
        tem4->next=NULL;
    }
    node *tem5=head;
    cout<<"Current elements in the linkedlist after deleting an element at end"<<endl;
    while(tem5!=NULL)
    {
        cout<<" "<<tem5->data<<"-->";
        tem5=tem5->next;
    }
    cout<<endl;
    cout<<"Enter the position where  you want to enter::"<<endl;
    int pos;
    cin>>pos;
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    node *tem6=new node(data);
    if(pos==1)
    {
        node *spl=head;
        tem6->next=spl;
        head=tem6;
    }
    else{
    node *tem7=head;
    for(int i=1;i<=pos-2&&tem7!=NULL;i++)
    {
        tem7=tem7->next;
    }
    if(tem7==NULL)
    {
        cout<<"please give the valid position"<<endl;
    }
    else
    {
        tem6->next=tem7->next;
        tem7->next=tem6;
    }
    }
    node *tem8=head;
    cout<<"Current elements in the linkedlist after inserting an element at given position"<<endl;
    while(tem8!=NULL)
    {
        cout<<" "<<tem8->data<<"-->";
        tem8=tem8->next;
    }
    cout<<endl;
    cout<<"Enter the position that you want to delete:"<<endl;
    int pos1;
    cin>>pos1;
    if(pos1==1)
    {
        node *tem9=head->next;
        delete head;
        head=tem9;
    }
    else{
    node *tem10=head;
    for(int i=1;i<=pos1-2 && tem10!=NULL;i++)
    {
        tem10=tem10->next;
    }
    if(tem10==NULL)
    {
        cout<<"Invalid position";
    }
    else
    {
        node *tem11=tem10->next->next;
        delete(tem10->next);
        tem10->next=tem11;
    }
    }
    node *tem12=head;
    cout<<"Current elements in the linkedlist after deleting an element at given position"<<endl;
    while(tem12!=NULL)
    {
        cout<<" "<<tem12->data<<"-->";
        tem12=tem12->next;
    }
    cout<<endl;
    cout<<"Enter the number to search in the linked list"<<endl;
    int num;
    cin>>num;
    int pos2=1;
    node *tem13=head;
    while(tem13!=NULL)
    {
        if(tem13->data==num)
        {
            cout<<"The position of the number is :"<<pos<<endl;
            break;
        }
        else
        {
            tem13=tem13->next;
            pos2++;

        }
        
    }
    if(tem13==NULL)
    {
        cout<<"Element is not present in given linked list"<<endl;
    }
    
    


    
    return 0;

}