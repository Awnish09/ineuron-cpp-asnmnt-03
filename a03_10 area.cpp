/*Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle*/

#include<iostream>
using namespace std;

class Area
{
    private:
        int radius, length, breadth, side;
    public:
        float circlearea(int x)
        {
            radius=x;
            float area;
            area=3.14*radius*radius;
            return area;
        }
        int area(int x, int y)
        {
            length=x;
            breadth=y;
            return length*breadth;
        }
        int area(int x)
        {
            side=x;
            return side *side;
        }

};

int main()
{
    Area circle, rectangle, square;
    cout<<"The area of a circle is "<<circle.circlearea(3)<<endl;
    cout<<"The area of a rectangle is "<<rectangle.area(9,5)<<endl;
    cout<<"The area of a square is "<<square.area(8);
}
