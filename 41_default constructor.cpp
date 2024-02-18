#include<iostream>
using namespace std;
class math
    {
    private:
        int a,b,c;
    public:
        math()
        {
            a=0;
            b=0;
        }
        void add()
        {
            c=a+b;
            cout<<"Total :"<<c;
        }
    };
int main()
    {
        math obj;
        obj.add();
    }
