#include<iostream>
using namespace std;
class con
{
    int sub1,sub2,sub3;
    public:
        void get_data();
        int total();
        float pr();
        int print();
};
void con::get_data()
{
    cout << "\n enter marks of math:";
    cin >> sub1;
    cout << "\n enter marks of sci:";
    cin >> sub2;
    cout << "\n enter marks of eng:";
    cin >> sub3;
}
int con::total()
{
    return sub1 + sub2 + sub3;
}
float con::pr()
{
    return (sub1 + sub2 + sub3) / 3;
}
int con::print()
{
    return sub1,sub2,sub3;
}
int main()
{
    con t1;
    t1.get_data();
    cout <<"total:" << t1.total() << endl;
    cout <<"pr:" << t1.pr() << endl;
    cout<<"\n total pr";
    cout<<"------------------------------------";
    cout<<"\n"<<"t1"<<t1.total()<<"\t"<<t1.pr();
    cout<<"------------------------------------";

}