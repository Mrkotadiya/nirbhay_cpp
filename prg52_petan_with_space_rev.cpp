#include<iostream>
using namespace std;
int main()
    {
        int sp=40,i,j;
        for(i=5;i>=1;i--)
        {
            for(j=1;j<=sp;j++)
            cout<<" ";
            for(j=1;j<=i;j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }

    }