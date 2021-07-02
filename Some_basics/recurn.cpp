#include<iostream>
using namespace std;
void nat(int n)
{
    if(n==0)
        return;
    nat(n-1);
    cout<<n<<" ";    
}
int main()
{
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    nat(n);
}