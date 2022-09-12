/*Define a class Circle and define an instance member function to find the area of the rectangle.*/

#include<iostream>
using namespace std;

class circle
{
    private:
        int radius;
        float area;
    public:
        float circarea()
        {
            area=3.14f*radius*radius;
            return area;
        }
        void setradiuis(int x)
        {
            radius=x;
        }

};

int main()
{
    circle a;
    a.setradiuis(3);
    cout<<"The area of the rectangle is "<<a.circarea()<<endl;
}
