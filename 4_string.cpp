#include<iostream>
using namespace std;
int main()
{
    string firstname="Rajesh";
    string secondname="raju";
    //cout<<firstname+" "+secondname<<endl;
    string fullname=firstname.append(secondname);
    //cout<<fullname;
    cout<<fullname[0];
    return 0;
}
