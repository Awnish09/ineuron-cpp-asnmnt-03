/*Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member functions to
set values for time and display values of time.*/

#include<iostream>
using namespace std;

class time
{
    private:
        int hour, minute, second;
    public:
        void set(int x, int y, int z)
        {
            if(x<0)
                x=-x;
            if(y<0)
                y=-y;
            if(z<0)
                z=-z;
            hour=x;
            if(y>=60)
            {
                while(1)
                {
                    y-=60;
                    hour+=1;
                    if(y<60)
                        break;
                }
            }
            minute=y;
            if(z>=60)
            {
                while(1)
                {
                    z-=60;
                    minute+=1;
                    if(z<60)
                        break;
                }
            }
            second=z;
        }
        void display()
        {
            if(second<10)
                cout<<hour <<" hr "<<minute<<" min 0"<<second<<" sec"<<endl;
            else if(minute<10)
                cout<<hour <<" hr 0"<<minute<<" min "<<second<<" sec"<<endl;
            else if(minute<10 && second<10)
                cout<<hour <<" hr 0"<<minute<<" min 0"<<second<<" sec"<<endl;
            else
                cout<<hour <<" hr "<<minute<<" min "<<second<<" sec"<<endl;
        }
};

int main()
{
    time start, end;
    start.set(2,-155,35);
    end.set(5,-45,12);
    start.display();
    end.display();
}
