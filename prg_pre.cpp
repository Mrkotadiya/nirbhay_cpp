#include<iostream>
using namespace std;
class sum
{
    int x,y;
    public:
    sum set_data(int a,int b)
    {
        x=a;
        y=b;
    }
    sum get_val()
    {
        cout<<"\n x="<<x;
        cout<<"\n y="<<y;
    }
};
int main()
{
    sum obj1;
    obj1.set_data(5,6);
    obj1.get_val();
}