#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
     int r1;
     char nm[20];
    public:
     void read();
     void display();  
};
class mark:public student
{
    protected:
        int s1,s2,s3,t;
        float p;
    public:
        void getmarks();
        void putmarks();
        void getresult();
        void putresult();
};
void student :: read()
{
    cout<<"\n Enter Roll No=";
    cin>>r1;
    cout<<"\n Enter Name=";
    cin>>nm;
}
void student :: display()
{
    cout<<"\n Roll no="<<r1;
    cout<<"\n Name="<<nm;
    cout<<"\n";
}
void mark :: getmarks()
{
    cout<<"\n  Enter Marks for 3 subject=";
    cin>>s1>>s2>>s3;
}
void mark :: putmarks()
{
    cout<<"\n subject 1 ="<<s1;
    cout<<"\n subject 2 ="<<s2;
    cout<<"\n subject 3 ="<<s3;
}
void mark :: getresult()
{
    t=s1+s2+s3;
    p=t/3.0;
}
void mark :: putresult()
{
    cout<<"\n total ="<<t;
    cout<<"prercentage="<<p<<endl;
}
int main()
{
    mark x;
    x.read();
    x.getmarks();
    x.getresult();
 
    x.putmarks();
    x.putresult();
       x.display();
    }
