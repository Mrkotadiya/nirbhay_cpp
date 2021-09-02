#include<iostream>
using namespace std;
int main()
{
    char ch;
    for(ch='a';ch<='z';ch++)
    {
        if(ch%2==1)
        {
            cout<<" "<<char(ch);
        }
    }
}