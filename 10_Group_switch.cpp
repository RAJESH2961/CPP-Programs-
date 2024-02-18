#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the month(1-12) :";
    cin>>m;
    switch(m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:cout<<"31-Days"<<endl;
        break;

        case 2:cout<<"28 |29 Days"<<endl;
        break;
        case 4:
        case 6:
        case 9:
        case 11:cout<<"30-Days"<<endl;

        default:cout<<"Invalid choice !!";
    }
}
