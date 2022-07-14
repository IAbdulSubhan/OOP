#include <iostream>
#include <string>
#include <sstream>                  //this header file used for coversion of int into str & str to int link of youtube->(https://youtu.be/LM6EDIKS5Pk)
using namespace std;

// Start of 1 -----------------------
int val=0;
class Address
{
public:
    int house_num;
    int street_num;
    string city;
    string country;
    Address()   //contructor to setting values 1 time from user
    {
        while(val<1)
        {
        cout<<"Enter the House_num:: ";
        cin >> house_num;
        cout<<"Enter the street_num:: ";
        cin >> street_num;
        cout<<"Enter the city:: ";
        cin >> city;
        cout<<"Enter the country:: ";
        cin >> country;
        val++;
        }
    } 
    string get_full_address();
};
string int_to_string(int num)
{

    stringstream stringConv1;
    stringConv1 << num;
    return stringConv1.str();
}
string Address::get_full_address()
    {
        string House_No;
        string Street_No;
        //...................
        //conversion house_num int to str
        House_No=int_to_string(house_num);
        //...................
        //conversion street_num int to str       
        Street_No=int_to_string(street_num);
        //........................
        // string C_address="H. No. "+House_No+","+" Street "+Street_No+" "+city+" "+country;
        return ("H. No. "+House_No+","+" Street "+Street_No+" "+city+" "+country);
    }
//-------------------------------------------------------------
//New class
class Employee : public Address
{
public:
    Address E_current_address;
    Address E_permanent_address;
    void set_current_address(int house_num,int street_num, string city, string country);
    void set_permanent_address(int house_num,int street_num, string city, string country);
    void print_addresses();
};

void Employee::set_current_address(int house_num,int street_num, string city, string country)
{
    this ->E_current_address.house_num= house_num;
    this ->E_current_address.street_num= street_num;
    this ->E_current_address.city=city;
    this ->E_current_address.country=country;
}

void Employee::set_permanent_address(int house_num,int street_num, string city, string country)
{
    this ->E_permanent_address.house_num= house_num;
    this ->E_permanent_address.street_num= street_num;
    this ->E_permanent_address.city=city;
    this ->E_permanent_address.country=country;
}


void Employee::print_addresses()
{
    cout<<"Employ current House Address is:: \n";
    cout<<"                              "<<E_current_address.get_full_address()<<endl;
    cout<<"Employ permanent House Address is:: \n";
    cout<<"                              "<<E_permanent_address.get_full_address()<<endl;
}
//End of 1 -----------------------
// Start of 2 ---------------------

//------------new class start
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
    string wheels[100];
public:
    void set_car_to_moving();
    void set_car_to_stopped();
    void print_car_wheels_state();

};

void Car::set_car_to_moving()
{
    int j=0;
    while(j<4)
    {
        wheels[j]="Turning";
        Wheel::set_wheel_state("Turning");
        j++;
    }
}
void Car::set_car_to_stopped()
{
    int j=0;
    while(j<4)
    {
        wheels[j]="Stopped";
        Wheel::set_wheel_state("Stopped");
        j++;
    }
}

void Car::print_car_wheels_state()
        {
            int j=0;
            while(j<4)
            {
            cout<< "wheel "<<j<<" is "<< Wheel::get_wheel_state()<<endl;
            j++;
             }
        }



int main()
{   
    // Start of PART - 1 -----------------------
    Address myobj;
    cout<<endl<<endl<<"Employ House Address is given bellow:: \n";
    cout << myobj.get_full_address()<<endl<<endl;
    // End of Part - 1 -----------------------
    // Start of PART - 2 -----------------------
    Employee e1;
    e1.set_current_address(4, 25, "Peshawar", "Pakistan");
    e1.set_permanent_address(14, 9, "Lahore", "Pakistan");
    e1.print_addresses();
    // End of Part - 2 -----------------------

    // Start of PART - 3 -----------------------

    int decision;
    string state="";
    cout<<"Enter 1 to set state 'Turning'  OR press 2 to set Stopped: ";
    cin >> decision;
    if(decision==1)
    state="Turning";
    else
    state="Stopped";
    Wheel w1;
    w1.set_wheel_state(state);
    cout <<"State of the Car is "<<w1.get_wheel_state() << endl;
    cout<<"--------------\n";
    //End of Part - 3 -----------------------
    // Start of PART - 4 -----------------------
    Car c;
    cout<<endl<<endl<<"'Now Information about car is starting'\n";
    cout<<"According Car Moving function::\n";
    c.set_car_to_moving();
    c.print_car_wheels_state();
    cout<<endl;
    cout<<"According Stopped car Function::\n";
    c.set_car_to_stopped();
    c.print_car_wheels_state();
    //End of Part - 4 -----------------------
    return 0;
}  
