#include<iostream>
using namespace std;
int cut(int n,int a,int b,int c)
{
    if(n==0)
        return 0;
    if(n<0)
        return -1;
    int res=max(cut(n-a,a,b,c),max(cut(n-b,a,b,c),cut(n-c,a,b,c)));
    if(res==-1)
        return -1;
    return res+1;            
}
int main()
{
    int n,a,b,c;
    cout<<"Enter the numbers :"<<endl;
    cin>>n>>a>>b>>c;
    cout<<"The maximum pecies we can cut :"<<cut(n,a,b,c);
}