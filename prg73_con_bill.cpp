#include<iostream>
using namespace std;
class Bill
{
    //public:
    int qty,rate,total,gst=0.18,total_am;
    public:
    void get_val();
    int get_total();
    int get_gst();
    int get_totalamount();
};   
void Bill::get_val()  
{
        cout<<"\n enter qty=";
        cin>>qty;
        cout<<"\n enter rate=";
        cin>>rate;

}
int Bill::get_total() 
{
    return total=qty*rate;
}
int Bill::get_gst()
{
    return (qty*rate) *0.18;
}
int Bill::get_totalamount()
{
    return total_am=(qty*total)*1.18;
}
int main()
{
    Bill t;
    t.get_val();
    cout<<"\n total="<<t.get_total();
    cout<<"\n total="<<t.get_gst();
   cout<<"\n total="<<t.get_totalamount();
    return 0;  
}