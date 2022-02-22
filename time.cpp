#include <iostream>

using namespace std;

int main()
{
    int h,m,s;
    cout<<"Enter time: Hours? Minutes? Seconds?";
    cin>>h>>m>>s;
    cout<<"The time is ="<<h<<":"<<m<<":"<<s<<"\n";
    cout<<"Time in total seconds ="<<h*60*60+m*60+s;
    return 0;
}
