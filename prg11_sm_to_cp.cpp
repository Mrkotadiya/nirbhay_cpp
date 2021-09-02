#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter ch=";
    cin>>ch;
    if(ch>=97)
    {
        cout<<"ch is capital="<<char(ch-32);
    }
    else
    {
        cout<<"char is small="<<char(ch+32);
    }
}