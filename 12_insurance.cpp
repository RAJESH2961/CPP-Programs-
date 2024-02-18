/*
A company insures its drivers in the following cases:
    a.	If the driver is married.
    b.	If the driver is unmarried, male & above 30 years of age.
    c.	If the driver is unmarried, female & above 25 years of age.
*/

#include<iostream>
using namespace std;
int main()
{
    char marital,gender;
    int age;
    cout<<"\nEnter Marital Status : M as Married | U as Unmarried : ";
    cin>>marital;
    if(marital=='M' || marital=='m')
    {
        cout<<"\nYou are Eligible For Insurance";
    }
    else if(marital=='U' || marital=='u')
    {
        cout<<"\nEnter Gender : M as Male | F as Female : ";
        cin>>gender;
        cout<<"\nEnter Age : ";
        cin>>age;
        if(((gender=='M' || gender=='m')&&age>=30) || ((gender=='F' || gender=='f')&&age>=25))
        {
            cout<<"\nYou are Eligible For Insurance";
        }
        else
        {
            cout<<"\nYou are Not Eligible For Insurance...";
            cout<<"\nor";
            cout<<"\nInvalid Gender Input....";
        }


    }
    else
    {
        cout<<"\nInvalid Marital Input....";
    }

    return 0;
}

