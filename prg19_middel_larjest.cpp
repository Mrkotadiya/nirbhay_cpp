#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter value of a=";
    cin>>a;
    cout<<"\n enter value of b=";
    cin>>b;
    cout<<"\n enter value of c=";
    cin>>c;

    {
        cout<<" a is second larjest"<<int(a);
    }
    else if(a>b || c<b)
    {    if(b>a || c<a)
        cout<<" b is second larjest"<<int(b);
    }
    else
    {
        cout<<"c is second larjest"<<int(c);
    }
}