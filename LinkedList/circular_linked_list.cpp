#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node( int n)
    {
        data=n;
        next=NULL;
    }
};
int main()
{
    int a,b,c;
    cout<<"Enter the value of first node :"<<endl;
    cin>>a;
    cout<<"Enter the value of the second node :"<<endl;
    cin>>b;
    cout<<"Enter the value of the third node :"<<endl;
    cin>>c;
    node *head=new node(a);
    node *temp1=new node(b);
    node *temp2=new node(c);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=head;

    
    cout<<head->data<<"-->";
    for(node *temp3=head->next;temp3!=head;temp3=temp3->next)
    {
        cout<<temp3->data<<"-->";
    }
    cout<<endl;
    cout<<"Enter the value to insert at the beginning of the circular linked list :"<<endl;
    int d;
    cin>>d;
    node *temp4=new node(d);
    node *temp5=head;
    if(temp5==NULL)
    {
        temp4->next=temp4;
        head=temp4;

    }
    else
    {
        temp4->next=temp5->next;
        temp5->next=temp4;
        int t=temp5->data;
        temp5->data=temp4->data;
        temp4->data=t; 
    }
    cout<<head->data<<"-->";
    for(node *temp3=head->next;temp3!=head;temp3=temp3->next)
    {
        cout<<temp3->data<<"-->";
    }
    cout<<endl;
    cout<<"Enter the value to insert at the end of the circular linked list :"<<endl;
    int e;
    cin>>e;
    node *temp6=new node(e);
    node *temp7=head;
    if(temp7==NULL)
    {
        temp6->next=temp6;
        head=temp6;

    }
    else
    {
        temp6->next=temp7->next;
        temp7->next=temp6;
        int t=temp7->data;
        temp7->data=temp6->data;
        temp6->data=t;
        head=temp6; 
    }
    cout<<head->data<<"-->";
    for(node *temp3=head->next;temp3!=head;temp3=temp3->next)
    {
        cout<<temp3->data<<"-->";
    }
    cout<<endl;
    cout<<"Deleting the beginning of the circular linked list :"<<endl;
    if(head==NULL)
    {
        head=NULL;
    }
    else if(head->next==head)
    {
        delete head;
        head=NULL;
    }
    else
    {
        node *temp8=head;
        node *temp9=head->next;
        temp8->data=temp8->next->data;
        temp8->next=temp8->next->next;
        delete temp9;
    }
    cout<<head->data<<"-->";
    for(node *temp3=head->next;temp3!=head;temp3=temp3->next)
    {
        cout<<temp3->data<<"-->";
    }
    cout<<endl;
    cout<<"Deleting the end node of the circular linked list"<<endl;
    if(head==NULL)
    {
        head=NULL;

    }
    else if(head->next==head)
    {
        delete head;
        head=NULL;
    }
    else
    {
        node *temp10=head;
        node *temp11;
        while (temp10->next->next!=head)
        {
            temp10=temp10->next;

        }
        temp11=temp10->next;
        temp10->next=head;
        delete temp11;
        
    }
    cout<<head->data<<"-->";
    for(node *temp3=head->next;temp3!=head;temp3=temp3->next)
    {
        cout<<temp3->data<<"-->";
    }
    cout<<endl;
    cout<<"Enter the node to delete in the linked list :"<<endl;
    int g;
    cin>>g;
    if(head==NULL)
    {
        head=NULL;
    }
    else if(g==1)
    {
        node *temp8=head;
        node *temp9=head->next;
        temp8->data=temp8->next->data;
        temp8->next=temp8->next->next;
        delete temp9;

    }
    else
    {
        node *curr=head;
        for(int i=0;i<g-2&&curr!=head;i++)
        { 
            curr=curr->next;
        }
        if(curr==head)
        {
              cout<<"invalid"<<endl;
        }
        else
        {
        node *temp12=curr->next;
        curr->next=curr->next->next;
        delete temp12;
        }

    }
    cout<<head->data<<"-->";
    for(node *temp3=head->next;temp3!=head;temp3=temp3->next)
    {
        cout<<temp3->data<<"-->";
    }
    cout<<endl;
    cout<<"Enter the node position where you want you insert the node in circular linked list "<<endl;
    int pos;
    cin>>pos;
    int k;
    cout<<"Enter the value :"<<endl;
    cin>>k;
    node *temp14=new node(k);
    node *temp15=head;
    if (pos==1)
    {
        temp14->next=temp15->next;
        temp15->next=temp14;
        int t1=temp15->data;
        temp15->data=temp14->data;
        temp4->data=t1; 
    }
    for(int i=0;i<pos-2&&temp15!=head;i++)
    {
        temp15=temp15->next;
    }
    if(temp15==head)
    {
        cout<<"Invalid"<<endl;
    }
    else if(temp15->next==head)
    {
        temp14->next=head;
        temp15->next=temp4;
    }
    else
    {
        temp14->next=temp15->next->next;
        temp15->next=temp14;

    }
    cout<<head->data<<"-->";
    for(node *temp3=head->next;temp3!=head;temp3=temp3->next)
    {
        cout<<temp3->data<<"-->";
    }
    cout<<endl;

    

    
    return 0;
    
    
    
    
}