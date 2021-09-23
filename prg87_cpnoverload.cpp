#include<iostream>
using namespace std;
class area
{
    public:
    area(double a)//comstructor overload
    {
          cout<<"\n area of circle= "<<3.14*a*a;
    }
    area(double b, double h)//comstructor overload
    {
        cout<<"\n area of triangle= "<<0.5*b*h;
    }
};
int main()
{
    area obj(2),obj1(2,3);
    return 0;
}