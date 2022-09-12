/*Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/

#include<iostream>
using namespace std;

class Square
{
    private:
        int num, sqr=1;
        static int funcount;
    public:
        void sqre()
        {
            sqr=num*num;
            funcount++;
        }
        void setnum(int x)
        {
            funcount++;
            num=x;
        }
        void getsqr()
        {
            funcount++;
            cout<<"The square of "<<num<<" is "<<sqr<<endl;
        }
        int getcount()
        {
            funcount++;
            return funcount;
        }

};
int Square::funcount;

int main()
{
    Square a;
    a.setnum(6);
    a.sqre();
    a.getsqr();
    a.setnum(3);
    a.sqre();
    a.getsqr();
    a.setnum(10);
    a.sqre();
    a.getsqr();
    a.setnum(15);
    a.sqre();
    a.getsqr();
    cout<<"The member functions are called "<<a.getcount()<<" times.\n";
}
