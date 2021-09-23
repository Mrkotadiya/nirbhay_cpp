#include <iostream>
using namespace std;
class aot
{
    float h,w;
    public:
    void set_val(int a,int b)
    {
        h = a;
        w=b;
        
    }
    float do_aot()
    {
       return 0.5*h*w;
    }
};
int main()
{
    aot obj1;
    obj1.set_val(5,4);
     cout << "area of traingal=" << obj1.do_aot() << endl;
}