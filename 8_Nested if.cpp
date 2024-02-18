#include<iostream>
using namespace std;
int main()
{
    int age;
    char gender;
    cout<<"Enter your Age :";
    cin>>age;
    if(age>=18)
    {
        cout<<"Enter your Gender :"<<endl;
        cin>>gender;
        if(gender=='m' || gender=='M')
        {
            cout<<"Go to Room no-5"<<endl;
        }
        else if(gender=='f' || gender=='F')
        {
            cout<<"Go to Room no-6"<<endl;
        }
        else
        {
            cout<<"Invalid Gender";
        }
    }
    else
    {
        cout<<"Your age is Below 18. So Your are not eligible to vote";
    }
}
