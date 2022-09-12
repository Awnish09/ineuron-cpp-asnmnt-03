/*Define a class Factorial and define an instance member function to find the Factorial of a number using class.*/

#include<iostream>
using namespace std;

class factorial
{
    private:
       // int num;
    public:
        //void fact()
        void fact(int num)
        {
            int i, n=1;
            for(i=1; i<=num; i++)
                n*=i;
            cout<<"factorial of "<<num<<" is " <<n<<endl;
        }
        /*void set(int x)
        {
            num=x;
        }*/
};

int main()
{
    factorial x, y;
    //x.set(5);
    //y.set(6);
    //x.fact();
    //y.fact();
    x.fact(5);
    y.fact(0);
}
