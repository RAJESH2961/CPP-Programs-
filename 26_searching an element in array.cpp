#include<iostream>
using namespace std;
int main()
{
    int a[20],i,n,key;
    cout<<"Enter the Number of elements in array:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter the value :";
        cin>>a[i];
    }
    cout<<"Enter the element to be searched :";
    cin>>key;
    for(i=0;i<n;i++)
    {
    if(a[i]==key)
    {
        cout<<"\nElement found at :"<<i+1;
        return 0;
    }
    else
    {
        cout<<"\nElement not found in the given array";
    }
}
}
