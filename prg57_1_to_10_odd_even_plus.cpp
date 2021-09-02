#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,total=0;
    for(i=1;i<=10;i++)
    {
        if(i%2==1)
        sum=sum+i;
        else
        total=total+i;
    }
    cout<<"odd: "<<int(sum);
    cout<<"\neven: "<<int(total);
    
}