#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of A & B :";
    cin>>a>>b;
    if(a>b)
    {
        cout<<a<<" is Greatest Number";
    }
    if(a<b)
    {
        cout<<b<<" is Greatest Number";
    }
    if(a==b)
    {
        cout<<a<< "is equal to "<<b<<endl;
    }
}
