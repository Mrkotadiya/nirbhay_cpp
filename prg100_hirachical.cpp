#include<iostream>
using namespace std;
class tata
{
    public:
    tata()
    {
        cout<<"\n Everyone call me Tata";
    }
};
class battery : public tata
{
    public:
    battery()
    {
        cout<<"\n i'm selling battery ";
    }
};
class steel : public battery 
{
    public:
    steel()
    {
        cout<<"\n i'm selling Steel";
    }
};

class solt:  public steel
{
    public:
    solt()
    {
        cout<<"\nI am selling solt ";
    }
};
int main()
{
  solt c1;
}