#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a=5,b=3,c;
    c=a/b;
    cout<<setprecision(1)<<c<<endl;
    cout<<setprecision(2)<<c<<endl;
    cout<<setprecision(3)<<c<<endl;

    return 0;
}