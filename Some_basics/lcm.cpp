#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b;
    int a1=a;
    int b1=b;
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
        {
            b=b-a;
        }
            
    }
    int l;
    l=b;
    cout<<"LCM is :"<<(a1*b1)/b<<endl;
    cout<<"GCD is :"<<a<<endl;
}