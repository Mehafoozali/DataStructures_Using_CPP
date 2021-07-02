#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"Enter n  and k :"<<endl;
    cin>>n>>k;
    if(n&(1<<(k-1)))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;    
    

    
}