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
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->next=temp2;
    int num;
    cout<<"Enter the number you want to enter :"<<endl;
    cin>>num;
    node *temp=new node(num);
    if(head==NULL)
    {
        head=temp;
    }
    else if(num<head->data)
    {
        temp->next=head;
        head=temp;
    }
    else
    {
        node *curr=head;
        while (curr->next!=NULL && curr->next->data<num)
        {
            curr=curr->next;
        }
        temp->next=curr->next;
        curr->next=temp;
        
    }
    node *print=head;
    while (print!=NULL)
    {
        cout<<print->data<<"-->";
        print=print->next;

    }
    cout<<endl;
    return 0;
    
    
}