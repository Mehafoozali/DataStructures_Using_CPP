#include<iostream>
using namespace std;
struct node
{
    int data;
    node *prev;
    node *next;
    node(int n)
    {
        data=n;
        prev=NULL;
        next=NULL;
    }
};
int main()
{
    int a,b,c;
    cout<<"Enter the node value at a :"<<endl;
    cin>>a;
    cout<<"Enter the node value at b :"<<endl;
    cin>>b;
    cout<<"Enter the  node value at c :"<<endl;
    cin>>c;
    node *head= new node(a);
    node  *temp1=new node(b);
    node *temp2=new node(c);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    node *forward=head;
    while(forward!=NULL)
    {
        cout<<forward->data<<"-->";
        forward=forward->next;
    }
    cout<<endl;
    cout<<"Enter the value to insert at begin :"<<endl;
    int beg;
    cin>>beg;
    node *temp3=new node(beg);
    temp3->next=head;
    if(head!=NULL)
    {
        head->prev=temp3;
    }
    head=temp3;
    node *forward1=head;
    while(forward1!=NULL)
    {
        cout<<forward1->data<<"-->";
        forward1=forward1->next;
    }
    cout<<endl;
    cout<<"Enter the value of the node to insert at end :"<<endl;
    int e;
    cin>>e;
    node *temp5=new node(e);
    if(head==NULL)
    {
        head=temp5;
    }
    else
    {
        node *temp4=head;
        while (temp4->next!=NULL)
        {
            temp4=temp4->next;
        }
        temp5->prev=temp4;
        temp4->next=temp5;
        
    }
    node *forward2=head;
    while(forward2!=NULL)
    {
        cout<<forward2->data<<"-->";
        forward2=forward2->next;
    }
    cout<<endl;
    /*cout<<"Now we are reversing the doubly linked list  :"<<endl;
    node *rev=head;
    node *pre=NULL;
    while (rev!=NULL)
    {
        pre=rev->prev;
        rev->prev=rev->next;
        rev->next=pre;
        rev=rev->next;
    }
    head=pre;
    node *forward3=head;
    while(forward3!=NULL)
    {
        cout<<forward3->data<<"-->";
        forward3=forward3->next;
    }
    cout<<endl;*/
    cout<<"Deleting an element at the end of  the doubly linked list :"<<endl;
    if(head->next==NULL)
    {
        delete head;
        head=NULL;
    }
    else
    {
        node *temp6=head;
        while (temp6->next->next!=NULL)
        {
            temp6=temp6->next;
        }
        delete temp6->next;
        temp6->next=NULL;
        
    }
    node *forward3=head;
    while(forward3!=NULL)
    {
        cout<<forward3->data<<"-->";
        forward3=forward3->next;
    }
    cout<<endl;
    cout<<"Deleting an element at the begining of the doubly linked list:"<<endl;
    if(head->next==NULL)
    {
        delete head;
        head=NULL;
    }
    else
    {
        node *temp7=head->next;
        delete head;
        temp7->prev=NULL;
        head=temp7;
    }
    node *forward4=head;
    while(forward4!=NULL)
    {
        cout<<forward4->data<<"-->";
        forward4=forward4->next;
    }
    cout<<endl;
    cout<<"Insert an node at given position in doubly linked list :"<<endl;
    int f;
    cout<<"Enter the value to insert :"<<endl;
    cin>>f;
    cout<<"enter the Inserting position :"<<endl;
    int ipos;
    cin>>ipos;
    node* temp8=new node(f);
    node* icurr=head;
    if(ipos==1)
    {
        temp8->next=head;
        head=temp8;

    }
    else
    {
        
    
    for(int i=1;i<=ipos-2&&icurr!=NULL;i++)
    {
        icurr=icurr->next;
    }
    if(icurr==NULL)
    {
        cout<<"You have entered invalid position. "<<endl;
    }
    else
    {
        temp8->prev=icurr;
        if(icurr->next!=NULL)
        {
            temp8->next=icurr->next;
            temp8->next->prev=temp8;
        }
        else
        {
            temp8->next=NULL;
        }
        icurr->next=temp8;
        
        
       
        
    }
    }
    node *forward5=head;
    while(forward5!=NULL)
    {
        cout<<forward5->data<<"-->";
        forward5=forward5->next;
    }
    cout<<endl;
    cout<<"delete an node at given position in doubly linked list :"<<endl;
    
    cout<<"enter the deleting position :"<<endl;
    int dpos;
    cin>>dpos;
    node *del;
    node* dcurr=head;
    node* temp9;
    if(dpos==1)
    {
        del=head;
        head=head->next;
        delete del;

    }
    else
    {
        
    
    for(int i=1;i<=dpos-2&&dcurr!=NULL;i++)
    {
        dcurr=dcurr->next;
    }
    if(dcurr==NULL)
    {
        cout<<"You have entered invalid position. "<<endl;
    }
    else
    {
        temp9=dcurr->next;
        if(dcurr->next->next!=NULL)
        {
            dcurr->next->next->prev=dcurr;
           
        }
        dcurr->next=temp9->next;
        delete temp9;
        
        
        
        
       
        
    }
    }
    node *forward6=head;
    while(forward6!=NULL)
    {
        cout<<forward6->data<<"-->";
        forward6=forward6->next;
    }
    cout<<endl;
    

    
    return 0;
}
