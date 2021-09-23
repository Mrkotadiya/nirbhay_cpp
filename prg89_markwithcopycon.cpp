//marksheet with constructor
#include<iostream>
using namespace std;
class con
{
    int sub1,sub2,sub3;
    public:
        void get_data();
     //  int total();
     //   int pr();
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
/*
int con::total()
{
    return sub1 + sub2 + sub3;
}
int con::pr()
{
    return (sub1 + sub2 + sub3) / 3;
}*/
int main()
{
    con m1;
    m1.get_data();
  //  cout << "total:" << m1.total() << endl;
  //  cout << "pr:" << m1.pr() << endl;
    cout<<"\n \t"<<"sub1"<<"\t"<<"sub2"<<"\t"<<"sub3"<<"\t"<<"total"<<"\t"<<"pr"<<endl; //<< m1.total(); //<< endl;;
}