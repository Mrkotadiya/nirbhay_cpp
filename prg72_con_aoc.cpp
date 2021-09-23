#include<iostream>
using namespace std;
class con
{
    float x;
    public:
    con(int a)
    {
        x=a;
    }
    int get_val()
    {
    
        return x * x;
    }
    int get_val1()
    {
    
        return x * x* x;
    }
};
int main()
{
    con c1(7),c2(5);
       cout<<"square= "<<c1.get_val()<<endl;
       cout<<"qube= "<<c2.get_val1()<<endl;
    return 0;
    
}