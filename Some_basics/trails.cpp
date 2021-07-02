#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    int fact=1;
    for( int i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    int count=0;
    while(fact%10==0)
    {
        count++;
        fact=fact/10;
    }
    cout<<"Trailing zeros :"<<count<<endl;
}