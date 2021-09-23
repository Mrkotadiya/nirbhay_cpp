#include<iostream>
using namespace std;
class findage
{
    int age;
    public:
    findage(int n)//comstructor
    {
        age=n;
        cout<<"\n constructor called= "<<age;
    }
     findage(findage &new_age)//comstructor
    {
        age=new_age.age;
        cout<<"\n constructor called= "<<age;
    }

};
int main()
{
    findage nirbhay(19);
    findage abhi(nirbhay);

}