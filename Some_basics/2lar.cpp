#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    int i;
    int max;
    int max1=0;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
        int temp;
        cout<<"Enter the elements into the array"<<endl;
        cin>>temp;
        v.push_back(temp);

    }
    max=12;
    for(i=0;i<n;i++)
    {
        if(v[i]>max1 && v[i]!=max)
        {
            max1=v[i];
        }
    }
    cout<<"The second largest is :"<<max1<<endl;
}