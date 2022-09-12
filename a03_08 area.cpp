/*Define a class Rectangle and define an instance member function to find the area of the rectangle.*/

#include<iostream>
using namespace std;

class rectangle
{
    private:
        int length, breadth;
    public:
        int area()
        {
            int a;
            a=length*breadth;
            return a;
        }
        void setrect(int x, int y)
        {
            length=x;
            breadth=y;
        }

};

int main()
{
    rectangle a;
    a.setrect(14,9);
    cout<<"The area of the rectangle is "<<a.area()<<endl;
}
