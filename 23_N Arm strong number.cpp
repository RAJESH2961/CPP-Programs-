#include<iostream>
using namespace std;
int main()
{
    int sum=0,n,t,r;
  for(int i=100;i<=999;i++)
  {

    n=i;
    while(n>0)//153  15
    {
        r=n%10;//3  5 1
        sum=sum+(r*r*r);//27 + 125=>152+1
        n=n/10;//15  1 0
    }
    if(sum==i)
    {
        cout<<i<<endl;
    }
    sum=0;
  }
    return 0;
}
