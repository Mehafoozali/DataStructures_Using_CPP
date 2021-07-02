#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    int temp;
    temp=n;
    int r,rev=0;

    while(temp!=0)
    {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;

    }
    if(n==rev)
    {
        cout<<"it is palindrome"<<endl;
    }
    else
    {
        cout<<"It is  not palindrome"<<endl;
    }
    
}