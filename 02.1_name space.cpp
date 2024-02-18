#include<iostream>
using namespace std;

namespace name1
{
    string name="rajesh";
    int age=22;
}

namespace name2
{
    string name="rajesh";
}
using namespace name1;
int main()
{
   /* string name='rajesh';
    string name='rajesh';//redecleration error
    */
    cout<<name;
    cout<<age;
    cout<<name2::name;
    return 0;
}
