#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the key to insert in the set"<<endl;
        int temp;
        cin>>temp;
        s.insert(temp);
    }
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<" ";

    }
    cout<<s.size()<<endl;
    int k;
    cout<<"Enter the number to search"<<endl;
    cin>>k;
    if(s.count(k))
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}