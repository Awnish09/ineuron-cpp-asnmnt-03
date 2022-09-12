/*Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex number*/

#include<iostream>
using namespace std;

class complex_number
{
    private:
        int a, b;
    public:
        void set(int x, int y)
        {
            a=x;
            b=y;
        }
        void get()
        {
            cout<<a <<" + "<<b<<"i\n";
        }
};

int main()
{
    complex_number num1, num2;
    num1.set(2,4);
    num2.set(5, 1);
    num1.get();
    num2.get();
}
