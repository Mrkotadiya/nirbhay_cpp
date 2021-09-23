#include<iostream>
using namespace std;
class sum
{
    int x,y;
    public:
    void set_val(int a,int b)
    {
        x=a;
        y=b;
    }
    void get_val()
    {
        cout<<"\n x="<<x;
        cout<<"\n y="<<y;
    }
};
int main()
{
    sum obj1;
    obj1.set_val(10,20);
    obj1.get_val();
}