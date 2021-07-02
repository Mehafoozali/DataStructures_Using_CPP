#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(n<=1)
        cout<<"no prime"<<endl;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }        
    } 
    if(n>1)
        cout<<n<<" ";   
}