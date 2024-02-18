#include<iostream>
using namespace std;
int main()
{
    int a[5]={10,20};
    int b[]={10,20,30,40,50};
    for(int x:a)
    {
        cout<<x<<endl;
    }
    cout<<"-------------------------"<<endl;
    cout<<"size :"<<sizeof(b)/sizeof(int);
}
