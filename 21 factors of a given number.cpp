#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"\nEnter N value :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        cout<<i<<endl;
    }
}
