#include<iostream>
using namespace std;
int main()
{
    int a[20],temp,i,n;
    cout<<"Enter The limit :";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the value :";
        cin>>a[i];
    }
    temp=a[0];
    for(i=1;i<n;i++)
    {
    if(a[i]>temp)
    {
        temp=a[i];
    }
    }
    cout<<"Greatest Element :"<<temp<<endl;
}
