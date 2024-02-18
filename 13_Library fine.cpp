/*
A library charges a fine for every book returned late.
For first 5 days the fine is 50 paise,
for 6-10 days fine is one rupee and
above 10 days fine is 5 rupees.
If you return the book after 30 days your membership will be cancelled.
Write a program to accept the number of days the member is late to return
the book and display the fine or the appropriate message.

>0 <=5  /0.50
>=6 <=10  /1
>10 <=30 /5
>30
*/

#include<iostream>
using namespace std;
int main()
{
    int days;
    cout<<"Enter the number of days:";
    cin>>days;
    if(days>0 && days<=5)
    {
        cout<<"\nPer Day Fine Amount is : 0.50";
        cout<<"\nTotal Fine Amount is : "<<days*0.50;
    }
    else  if(days>=6 && days<=10)
    {
        cout<<"\nPer Day Fine Amount is : 1";
        cout<<"\nTotal Fine Amount is : "<<days*1;
    }
     else  if(days>10 && days<=30)
    {
        cout<<"\nPer Day Fine Amount is : 5";
        cout<<"\nTotal Fine Amount is : "<<days*5;
    }
    else
    {
        cout<<"\nmembership will be cancelled.";
    }
    return 0;
}
