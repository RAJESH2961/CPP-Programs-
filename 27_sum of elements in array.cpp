#include<iostream>
using namespace std;
int main()
{
    int a[20],sum,i,n;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter values : ";
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"Sum :"<<sum<<endl;
}
