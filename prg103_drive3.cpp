#include<iostream>
#include<string.h>
using namespace std;
class TEST
{
    int testcode,no_candidate,centerreqd;
    string description;
    public:
        void schedule();
        int calcntr();
        void disptest();
};
void TEST :: schedule()
{
    cout<<"\n Enter test code :";
    cin>>testcode;
    cout<<"\n Enter description :";
    cin>>description;
    cout<<"\n Enter a no of candidate :";
    cin>>no_candidate;
}
int TEST :: calcntr()
{
    centerreqd=(no_candidate/100+1);
    return centerreqd;
}
void TEST :: disptest()
{
    cout<<"\n Enter test code :"<<testcode;
    cout<<"\n Enter description :"<<description;
    cout<<"\n Enter a no of candidate :"<<no_candidate;
    cout<<"\n senter requred : "<<centerreqd;
}
int main()
{
    TEST t1;
    t1.schedule();
    t1.calcntr();
    t1.disptest();
    return 0;
}