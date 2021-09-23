#include<iostream>
using namespace std;
int& returnvalue(int& x)
{
    cout<<"x="<<x
    <<"the addres of x is="
    <<&x<<endl;
    return x;
}
int main()
{
    int a=20;    
    int& b=returnvalue(a);
    cout<<"a="<<a
    <<"the addres of a is="
    <<&a<<endl;
    cout<<"b="<<b
    <<"the addres of b is="
    <<&b<<endl;
    return 0;
}