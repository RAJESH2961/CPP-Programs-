/*
If his basic salary is less than Rs. 1500,
then HRA = 10% of basic salary and DA = 90% of basic salary.
If his salary is either equal to or above Rs. 1500,
then HRA = Rs. 500 and DA = 98% of basic salary.
If the employee's salary is input through the keyboard
write a program to find his gross salary
*/
#include<iostream>
using namespace std;
int main()
{
    float bs,gs,hra,da;
    cout<<"\nEnter Your Basic Salary : ";
    cin>>bs;
    if(bs<1500)
    {
        hra=bs*10/100;
        da=bs*90/100;
    }
    else
    {
        hra=500;
        da=bs*98/100;
    }
    gs=bs+hra+da;
    cout<<"\nGross salary :"<<gs;
    cout<<"\nHRA          :"<<hra;
    cout<<"\nDA           :"<<da;
    cout<<"\n---------------------------";
    cout<<"\nGross Salary :"<<gs;
}
