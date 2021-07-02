#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    //traversal;
    while(s.empty()==false)
    {
        cout<<s.top()<<" ";
        s.pop();
    }

}
