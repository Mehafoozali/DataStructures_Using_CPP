#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    unordered_map<int,int> s;
    for(int i=0;i<n;i++)
    {
        int tempv;
        int tempk;
        cout<<"Enter the key :"<<endl;
        cin>>tempk;
        cout<<"Enter the value :"<<endl;
        cin>>tempv;
        s.insert({tempk,tempv});
    }
    cout<<s.size()<<endl;
    cout<<"----------------------"<<endl;
    cout<<"| key      |  value |"<<endl;
    for(auto i=s.begin();i!=s.end();i++)
    {
    cout<<"| "<<(i->first)<<"        |  "<<(i->second)<<"     |"<<endl;

    }
    cout<<"----------------------"<<endl;

        

}
    
    