#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int count=0;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }
    if(count>=2)
        cout<<"composite"<<endl;
    else
    {
        cout<<"prime"<<endl;
    }
        
}
