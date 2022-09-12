/*Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/

#include<iostream>
using namespace std;

class LargestNumber
{
    private:
        int num1,num2,num3,largest;
    public:
        void greatest(int x, int y, int z)
        {
            num1=x;
            num2=y;
            num3=z;
            largest=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
            cout<<"Largest among "<<num1<<", "<<num2<<" and "<<num3<<" is "<<largest<<endl;
        }

};

int main()
{
    LargestNumber x, y, z;
    x.greatest(9,6,4);
    y.greatest(3,10,15);
    z.greatest(15,18,8);
}
