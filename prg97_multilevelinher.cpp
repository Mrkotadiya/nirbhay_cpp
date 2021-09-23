#include<iostream>
using namespace std;
class tata
{
    public:
    tata()
    {
        cout<<" I am Tata,i manufacturing";
    }
};
class steel : public tata
{
    public:
    steel()
    {
        cout<<"\n Steel used in";
    }
};
class nexon : public steel
{
    public:
    nexon()
    {
        cout<<"\n Nexon ev & Nexon petrol";
    }
};
int main()
{
    nexon c1;
}