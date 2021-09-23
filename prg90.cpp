#include<iostream>
using namespace std;
class findage
{
    int sub1,sub2,sub3;
    public:
    findage(int a,int b,int c)//comstructor
    {
        
        cout<<"\n enter marks= "<<sub1<<sub2<<sub3;
    }
     findage(findage &new_marks)//comstructor
    {
        sub1,sub2,sub3=new_marks.sub1,sub2,sub3;;
        cout<<"\n enter marks= "<<sub1<<sub2<<sub3;
    }

};
int main()
{
    findage n1();
    findage abhi(n1);

}