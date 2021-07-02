#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    if(n<=1)
        cout<<"No"<<endl;
    else
    {
        if(n&(n-1))
            cout<<"No"<<endl;
        else
        {
            cout<<"Yes"<<endl;
        }
            
    }
        
}

