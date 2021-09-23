#include<iostream>
#include<string.h>
using namespace std;
class batsman
{
    int bcode,inning,notout,run,batavg;
    char bname[20];
    public:
    void readdata();
    int calcavg();
    void displaydata();
};   
void batsman :: readdata()
{   
    cout<<"\n enter batsman code :";
    cin>>bcode;
    cout<<"\n enter bname name :";
    cin>>bname;
    cout<<"\n enter batsman inning :";
    cin>>inning;
    cout<<"\n enter notout score :";
    cin>>notout;
    cout<<"\n enter batsman run :";
    cin>>run;

}
int batsman :: calcavg()
{
    batavg=run/(inning-notout);
    return batavg;
}
void batsman :: displaydata()
{
    cout<<"\n enter batsman code :"<<bcode;
    cout<<"\n enter bname name :"<<bname;
    cout<<"\n enter batsman inning :"<<inning;
    cout<<"\n enter notout score :"<<notout;
    cout<<"\n enter batsman run :"<<run;
    cout<<"\n batsman avarage :"<<batavg;
}
int main()
{
    batsman b1[3];
    int i;
    for(i=1;i<3;i++)
    {
        cout<<"\n bants number : "<<i<<endl;
        b1[i].readdata();
        b1[i].calcavg();
    }
    for( i=1;i<3;i++)
    {
        cout<<"\n batsman number :"<<i<<endl;
        b1[i].displaydata();
    }
    return 0;
}