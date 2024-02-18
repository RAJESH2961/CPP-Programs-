#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i,j,temp;
    cout<<"Enter The Limit :";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter The value :";
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"\nSorted Array"<<endl;
    for(i=0;i<n;i++)
    {
    cout<<a[i]<<endl;
    }

}
