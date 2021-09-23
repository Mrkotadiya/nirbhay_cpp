#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
        int r1;
        char nm[20];
    public:
        void read_data();
        void display_data();         
};
class E1 : public student
{
    protected:
        int s1,s2,s3;
    public:
        int getmarksE1();
        void putmarkseE1();
            
};
class E2 : public student
{
    protected:
        int su1,su2,su3;
    public:
        int getmarksE2();
        void purtmarksE2();
};
class Final_EX : public student
{
    protected:
          int sub1,sub2,sub3,t;
          float p;
    public:
        int getmarksF1();
        void purtmarksF1();  
        int getresultF1();
        void putresultF1();
};
void student :: read_data()
{
    cout<<"\n Enter Roll No=";
    cin>>r1;
    cout<<"\n Enter Name=";
    cin>>nm;
}
void student :: display_data()   
{   
    cout<<"\n Roll No="<<r1;
    cout<<"\n Name="<<nm;
}
int E1 :: getmarksE1()
{
    cout<<"\n Enter Enternal1 marks of 3 subject=";
    cin>>s1>>s2>>s3;
    return s1,s2,s3;
}
void E1 ::putmarkseE1()
{
    cout<<" Enternal1 mark of math:"<<s1;
    cout<<" Enternal1 mark of science:"<<s2;
    cout<<" Enternal1 mark of English:"<<s3;
}
int E2 :: getmarksE2()
{
    cout<<"\n Enter Enternal1 marks of 3 subject=";
    cin>>su1>>su2>>su3;
    return su1,su2,su3;
}
void E2 :: purtmarksE2()
{
    cout<<" Enternal1 mark of math:"<<su1;
    cout<<" Enternal1 mark of science:"<<su2;
    cout<<" Enternal1 mark of English:"<<su3;
}
int Final_EX :: getmarksF1()
{
    cout<<"\n Enter Enternal1 marks of 3 subject=";
    cin>>sub1>>sub2>>sub3;
    return sub1,sub2,sub3;
}
void Final_EX ::purtmarksF1()
{
    cout<<" Enternal1 mark of math:"<<sub1;
    cout<<" Enternal1 mark of science:"<<sub2;
    cout<<" Enternal1 mark of English:"<<sub3;
}/*
void Final_EX :: getresultF1()
{
    void putmarkseE1();
    void putmarkseE2();
     
}*/
int main()
{
    student n;
    n.display_data();
}