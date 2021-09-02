#include<iostream>
using namespace std;
int main()
{
 int i,j,sp=40;
    i=1;
    while (i<=5)
    {
        j=1;
        while(j<=sp)
        {
        cout<<" ";
        j++;
        }
        j=1;
        while(j<=i)
        {
            cout<<"* ";
            j++;
        }
        i++;
        cout<<"\n";
        sp--;
    }
    sp+=2;
    i=4;
    while (i>=1)
    {
        j=1;
        while(j<=sp)
        {
        cout<<" ";
        j++;
        }
        j=1;
        while(j<=i)
        {
            cout<<"* ";
            j++; 
        } 
        i--;
        cout<<"\n";
        sp++;
    }
    
}