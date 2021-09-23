#include<iostream>
using namespace std;
class marks
{
    int sub1,sub2,sub3,total,pr;
    string name;
    public:
    static int count;
    marks(int sub1,int sub2,int sub3,string name)
    {
        this ->sub1=sub1;
        this ->sub2=sub2;
        this ->sub3=sub3;
        this->name=name;
        this->total=total;
       // this ->sub1+sub2+sub3=sub1+sub2+sub3;
        count++;
    }
    void getdata()
    {
        total=sub1+sub2+sub3;
        pr=(sub1+sub2+sub3)/3;
       // cout<<"\n -------------------------------------------------------------------";
        cout<<name<<"--"<<sub1<<"--"<<sub2<<"--"<<sub3<<"--"<<total<<"--"<<pr<<endl;
       // cout<<"\n -------------------------------------------------------------------";
    }
};
int marks::count;
int main()
{
    marks n(74,65,96,"nirav"),n2(74,70,97,"nirbhay"),n3(74,75,99,"ashish");
    cout<<"\n --------------------------------";
    cout<<"\n";
    n.getdata();
    cout<<"\n---------------------------------";
     cout<<"\n";
    n2.getdata();
    cout<<"\n---------------------------------";
    cout<<"\n";
    n3.getdata();

    cout<<"\n no. of marksheet="<<marks::count;

}