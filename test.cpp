#include<iostream>
using namespace std;
class ece
{
    int a =4;
    public:
    int test1()
    {
        a++;
        cout<<a<<endl;
        return a;
    }
    int b=7;
};
class nitc:public ece
{
    public:
    nitc()
        {
            b=test1()*b++;

        }
};
int main()
    {
        ece a1; nitc b1;
        b1.test1();
        cout<<b1.b;
    }