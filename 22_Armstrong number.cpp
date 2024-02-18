#include<iostream>
using namespace std;
int main()
{
    int sum=0,n,t,r;
  cout<<"\nEnter N value :";
  cin>>n;
  t=n;
    while(n>0)//153  15
    {
        r=n%10;//3  5 1
        sum=sum+(r*r*r);//27 + 125=>152+1
        n=n/10;//15  1 0
    }
    if(sum==t)
    {
        cout<<"Is a Armstrong NUmber "<<endl;
    }
    else{
        cout<<"Is not a Armstrong NUmber "<<endl;
    }
}
