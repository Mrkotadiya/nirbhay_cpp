#include<iostream>
using namespace std;
class area
{
    public:
    void findarea(double a)//function overload
    {
          cout<<"\n area of circle= "<<3.14*a*a;
    }
    void findarea(double b, double h)//function overload
    {
        cout<<"\n area of triangle= "<<0.5*b*h;
    }
};
int main()
{
   
    area obj1;
    obj1.findarea(2);
    obj1.findarea(2,3);
    return 0;
}