#include<iostream>
using namespace std;
int main()
{
    string x="Ram";
    string y="sam";
    cout<<"Before x :"<<x<<endl;
    cout<<"Before y :"<<y<<endl;
    x.swap(y);
    cout<<"After x :"<<x<<endl;
    cout<<"After y :"<<y<<endl;
}
