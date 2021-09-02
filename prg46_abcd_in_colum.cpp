#include<iostream>
using namespace std;
int main()
{
    char ch;
    for(ch=65;ch<=90;ch++)
    {
        if(ch%3==2)
        {
            cout<<"\n";
            cout<<" "<<char(ch);
        }
        else
        {
            cout<<" "<<char(ch);
        }
          
    }
}