#include<iostream>
using namespace std;
class con
{
    int x;
    public:
    con(int a)
    {
        x=a;
    }
    void set_x(int a)
    {
        x=a;
    }
    int get_x()
    {
        return x;
    }
};
int main()
{
    con c1(7),c2(6);
  //  cout<<"\n x="<<c1.set_x(); 
   // cout<<"\n x="<<c2.set_x();
 
    c1.set_x(70),c2.set_x(60);
    cout<<"\n x="<<c1.get_x();
    cout<<"\n x="<<c2.get_x();
}