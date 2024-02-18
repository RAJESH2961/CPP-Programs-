#include<iostream>
using namespace std;
int main()
{
    string a;
    cout<<"Enter the string : ";
    cin>>a;
    a.push_back('h');
    cout<<a<<endl;
    a.pop_back( );
    cout<<a<<endl;
    return 0;
}
