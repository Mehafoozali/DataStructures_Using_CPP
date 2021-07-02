#include<iostream>
using namespace std;
int main()
{
    int n;
    char ch;
    cin>>ch;
    cin>>n;
    if((ch=='c'|| ch=='C') && n<=3)
    {
        cout<<"Welcome to CCD!"<<endl;
        if(n==1)
        {
            cout<<"Enjoy your Espresso Coffee!";
        }
        if(n==2)
        {
            cout<<"Enjoy your Cappuccino coffee!";
        }
        if(n==3)
        {
            cout<<"Enjoy your Latte Coffee!";
        }
    }
    else if((ch=='t'|| ch=='T') && n<=8)
    {
        cout<<"Welcome to CCD!"<<endl;
        if(n==1)
        {
            cout<<"Enjoy your Plain Tea!";
        }
        if(n==2)
        {
            cout<<"Enjoy your Assam Tea!";
        }
        if(n==3)
        {
            cout<<"Enjoy your Ginger Tea!";
        }
        if(n==4)
        {
            cout<<"Enjoy your Ginger Tea!";
        }
        if(n==5)
        {
            cout<<"Enjoy your Cardamom Tea!";
        }
        if(n==6)
        {
            cout<<"Enjoy your Masala Tea!";
        }
        if(n==7)
        {
            cout<<"Enjoy your Lemon Tea!";
        }
        if(n==8)
        {
            cout<<"Enjoy your Organic Darjeeling Tea!";
        }
    }
    else if((ch=='s'|| ch=='S') && n<=4)
    {
        cout<<"Welcome to CCD!"<<endl;
        if(n==1)
        {
            cout<<"Enjoy your Hot and Sour Soup!";
        }
        if(n==2)
        {
            cout<<"Enjoy your Veg Corn Soup!";
        }
        if(n==3)
        {
            cout<<"Enjoy your Tomato Soup!";
        }
        if(n==4)
        {
            cout<<"Enjoy your Spicy Tomato Soup!";
        }
    }
    else if((ch=='b'|| ch=='B') && n<=3)
    {
        cout<<"Welcome to CCD!"<<endl;
        if(n==1)
        {
            cout<<"Enjoy your Hot Chocolate Drink!";
        }
        if(n==2)
        {
            cout<<"Enjoy your Badam Drink!";
        }
        if(n==3)
        {
            cout<<"Enjoy your Badam-Pista Drink!";
        }
    }
    else{
        cout<<"INVALID OPTION!";
    }    
    
}