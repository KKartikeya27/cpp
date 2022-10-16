#include<iostream>
using namespace std;

class Polygon
    {
        protected:
        int height,width;
        public:
        void setval(int,int);
    };

class Rectangle:public Polygon 
    {
        public:
        int area(){return(width*height);}
    };

class Triangle: public Polygon
    {
        public:
        int areatri(){return (width*height/2);}
    };

void Polygon::setval(int a, int b)
    {
        height=a;width=b;
    }
int main()
    {
        Rectangle rect1;
        Triangle tri1;
        rect1.setval(2,3);
        tri1.setval(3,6);
        cout<<"Triarea: "<<tri1.areatri()<<"\t";
        cout<<"REctarea: "<<rect1.area();
        cout<<tri1.height;

        return 0;
    }