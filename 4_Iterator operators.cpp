#include<iostream>
using namespace std;
int main()
{
    string a("Welcome to tutor joes");
    string::iterator it;
    string::reverse_iterator it2;
    for(it=a.begin() ; it!=a.end() ; it++)
        cout<<*it<<endl;
    for(it2=a.rbegin() ; it2!=a.rend() ; it2++)
        cout<<*it2<<endl;
    return 0;
}
