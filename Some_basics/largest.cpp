
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int n,i,lar,lar2;
    vector<int>v;
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int input;
        cout<<"Enter the elements in array"<<endl;
        cin>>input;
        v.push_back(input);
    }
    sort(v.begin(),v.end());
    v.pop_back();
    auto it2=v.rbegin();
    cout<<"Second largest element :"<<*it2;
}