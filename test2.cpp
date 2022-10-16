#include<iostream>
using namespace std;
int main()
    {
        int a=5,*b,**c,***d;
        d=&c;
        c=&b;
        b=&a;
        **c=16+***d * *b+ 4 + ++a;
        cout <<**c+a<<endl<<***d;   
    }