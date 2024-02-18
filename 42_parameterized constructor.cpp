#include<iostream>
using namespace std;
class math
    {
    private:
        int a,b,c;
    public:
        math(int x,int y)
        {
            a=x;
            b=y;
        }
        void add()
        {
            c=a+b;
            cout<<"Total :"<<c;
        }
    };
int main()
    {
        math obj(33,33);
        obj.add();
    }

