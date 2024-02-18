/*
Else If Ladder in C++ :

A certain grade of steel is graded according to the following conditions:

1. Hardness must be greater than 50.
2. Carbon content must be less than 0.7
3. Tensile strength must be greater than 5600

The grades are as follows:

Grade is 10, if all three conditions are met.
Grade is 9, if conditions 1 and 2 are met.
Grade is 8, if conditions 2 and 3 are met.
Grade is 7, if conditions 1 and 3 are met.
Grade is 6, if only one condition is met.
Grade is 5, if none of the conditions are met.
*/
#include<iostream>
using namespace std;
int main()
{
    int h,t;
    float c;
    cout<<"Enter The Hardness And Tensile :";
    cin>>h>>t;
    cout<<"Enter The Carbon :"<<endl;
    cin>>c;
    if(h>50 && c<0.7 && t>5800)
    {
        cout<<"Grade 10 "<<endl;
    }
    else if(h>50 && c<0.7 )
    {
        cout<<"Grade 9 "<<endl;
    }
    else if(c<0.7 && t>5800)
    {
        cout<<"Grade 8 "<<endl;
    }
    else if(h>50 && t>5800)
    {
        cout<<"Grade 7 "<<endl;
    }
    else if(h>50 || c<0.7 || t>5800)
    {
        cout<<"Grade 6"<<endl;
    }
    else
    {
        cout<<"Grade 5 "<<endl;
    }
    return 0;
}
