#include<iostream>
using namespace std;
int main()
{
    char ch='a',i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1 ;j<=i;j++)
        {
            cout<<" "<<char(ch++);
        }
        cout<<"\n";
    }

}