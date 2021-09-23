#include<iostream>
using namespace std;
class bank
{
    int accno,balance;
    string myname;
    public:
   // static int count;
    bank(int accno,int balance,string myname)
    {
        this ->accno=accno;
        this ->balance=balance;
        this ->myname=myname;
    }
    void getdata()
    {
        cout<<myname<<" - "<<accno<<" - "<<balance;
    }
};
int main()
{
    bank n(101,1500,"nirav");
    n.getdata();
    return 0;

}