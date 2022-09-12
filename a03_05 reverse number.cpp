/*Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.*/

#include<iostream>
using namespace std;

class reverseNumber
{
    private:
        int num, numc, rev=0;
    public:
        void setnum(int x)
        {
            num=x;
            numc=x;
        }
        void revers()
        {
            for( ; numc; numc/=10)
            {
                rev=rev*10+numc%10;
            }
        }
        void get()
        {
            cout<<"The reverse of number "<<num<<" is "<<rev;
        }
};

int main()
{
    reverseNumber number;
    number.setnum(5982);
    number.revers();
    number.get();
}
