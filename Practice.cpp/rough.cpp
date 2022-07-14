#include <iostream>
#include <string>
#include <sstream>                  //this header file used for coversion of int into str & str to int link of youtube->(https://youtu.be/LM6EDIKS5Pk)
using namespace std;

class Wheel
{
private:
    string variable;
public:
    void set_wheel_state(string s);
    string get_wheel_state();
    string W_state;
};

void Wheel::set_wheel_state(string s)
{
    variable=s;
}

string Wheel::get_wheel_state()
{
    return variable;
}

//------------new class start
class Car : public Wheel
{
private:
    string wheels[4];
public:
    void set_car_to_moving();
    void set_car_to_stopped();
    void print_car_wheels_state();
    // string W_state;

};

void Car::set_car_to_moving()
{
    
    for(int i=0;i<4;i++)
    {
        //wheels[i]="Turning";
        Wheel::set_wheel_state("Turning");
    }
}
void Car::set_car_to_stopped()
{
    for(int i=0;i<4;i++)
    {
        // wheels[i]="Stopped";
        Wheel::set_wheel_state("Stopped");
    }
}

void Car::print_car_wheels_state()
        {
            for(int i=0 ; i <4 ; i++)
            {
            cout<< "wheel "<<i<<" is "<< Wheel::get_wheel_state()<<endl;
           
             }
        }


int main()
{
    Wheel w1;
    w1.set_wheel_state("Turning");
    cout <<"State of the Car is "<<w1.get_wheel_state() << endl;
    cout<<"--------------\n";
    //End of Part - 3 -----------------------
    Car c;
    cout<<"According Car Moving function::\n";
    c.set_car_to_moving();
    c.print_car_wheels_state();
    cout<<endl;
    cout<<"According Stopped car Function::\n";
    c.set_car_to_stopped();
    c.print_car_wheels_state();
    return 0;

}
