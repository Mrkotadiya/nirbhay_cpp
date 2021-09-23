#include <iostream>
using namespace std;
class student
{
    int adm_no;
    string sname;
    float eng, math, science, total;

public:
    int take_data();
    void ctotal();
    int show_data();
};
int student::take_data()
{
    cout << "\nEnter admno=>";
    cin >> adm_no;
    cout << "\nEnter sname=>";
    cin >> sname;
    cout << "\nEnter marks of eng =>";
    cin >> eng;
    cout << "\nEnter marks of math=>";
    cin >> math;
    cout << "\nEnter marks of science=>";
    cin >> science;
}
void student::ctotal()
{
    total = eng + math + science;
    cout << "\ntotal:" << total;
}
int student::show_data()
{
    take_data();
    ctotal();
}
int main()
{
    student s1;
    s1.show_data();
    return 0;
}