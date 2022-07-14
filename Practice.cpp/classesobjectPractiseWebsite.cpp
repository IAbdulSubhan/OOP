/*Write a C++ Program to find Largest of three Numbers using class. 
Here’s simple C++ program to find greatest of 3 numbers by defining functions inside class 
in C++ Programming Language.*/
// #include <iostream>
// using namespace std;

// class largest_num
// {
// private:
//     int num1,num2,num3;
// public:
//     void setData();
//     void getData();
// };

// void largest_num::setData()
// {
//     cout<<"Enter number1:: ";
//     cin >> num1;
//     cout<<"Enter number2:: ";
//     cin >> num2;
//     cout<<"Enter number3:: ";
//     cin >> num3;
// }
// void largest_num::getData()
// {
//     int num=num1;
//     if(num1<num2 && num1<num3)
//     {
//         if(num2>num3)
//         {
//             num=num2;
//         }
//         else
//         num=num3;
//     }
//     else if(num2<num1 && num2<num3)
//     {
//         if(num1>num3)
//         {
//             num=num1;
//         }
//         else
//         num=num3;
//     }
//     else
//     {
//         if(num2>num1)
//         {
//             num=num2;
//         }
//         else
//         num=num1;
//     }
//     cout<<"Greater number = "<<num<<endl;
// }

// int main()
// {
//     largest_num n;
//     n.setData();
//     n.getData();
//     return 0;
// }
//----------------------------------------------------------------------------------------------------
/*Write a C++ program to find Reverse of a Number using class. Here’s simple 
C++ program to find reverse of number by defining functions outside class in C++ Programming Language.*/
// #include <iostream>
// using namespace std;
// class Reverse_num
// {
// private:
//     int num,Reversed_Num=0;
// public:;
//     Reverse_num();
//     void get_val();
// };

// // Reversenum::Reversenum(/* args */)
// // {
// // }

// Reverse_num::Reverse_num()
// {
//     int rem;
//     cout<<"Enter the number which you wants to reverse:: ";
//     cin >> num;
//     while(num != 0) {
//         rem = num%10;
//         Reversed_Num = Reversed_Num*10 + rem;
//         num /= 10;
//     }

// }
// void Reverse_num::get_val()
// {
//     cout<<"Reversed num= "<<Reversed_Num<<endl;
// }
// int main()
// {
//     Reverse_num number;
//     number.get_val();
//     return 0;
// }
//--------------------------------------------------------------------
/*C++ Program to Add Two Time Objects using call by reference  */

// #include<iostream>
// using namespace std;

// class time
// {
//         int hr,min,sec;
//         public:
//                 void get()
//                 {
//                     cout<<"\nEnter Hour :: ";
//                         cin>>hr;
//                         cout<<"\nEnter Minutes :: ";
//                         cin>>min;
//                         cout<<"\nEnter Seconds :: ";
//                         cin>>sec;
//                 }

//                 void disp()
//                 {
//                         cout<<"[ "<<hr<<":"<<min<<":"<<sec<<" ] \n";

//                 }
//                 void sum(time &,time &);
// };

// void time::sum(time &t1,time &t2)
// {
//         sec=t1.sec+t2.sec;
//         min=sec/60;
//         sec=sec%60;
//         min=min+t1.min+t2.min;
//         hr=min/60;
//         min=min%60;
//         hr=hr+t1.hr+t2.hr;
// }

// int main()
// {
//         time t1,t2,t3;
//         cout<<"\nEnter 1st time Details :: \n";
//         t1.get();
//         cout<<"\nEnter 2nd time Details :: \n";
//         t2.get();
//         cout<<"\nThe 1st time entered is :: ";
//         t1.disp();
//         cout<<"\nThe 2nd time entered is :: ";
//         t2.disp();

//         t3.sum(t1,t2);

//         cout<<"\nThe Sum of two times are :: ";

//         t3.disp();

//         return 0;
// }

//------------------------------------
#include <iostream>
using namespace std;

class clockType
{
public:
    void setTime(int, int, int);
    void getTime(int&, int&, int&) const;
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clockType&) const;

private:
    int hr;
    int min;
    int sec;
};


int main()
{
    clockType myClock;
    clockType yourClock;  

    int hours;
    int minutes;
    int seconds;

       //set the time of myClock
    myClock.setTime(5, 4, 30);                          //Line 1

    cout << "Line 2: myClock: ";                        //Line 2
    myClock.printTime();    //print the time of myClock //Line 3
    cout << endl;                                       //Line 4

    cout << "Line 5: yourClock: ";                      //Line 5
    yourClock.printTime(); //print the time of yourClock  Line 6
    cout << endl;                                       //Line 7

       //set the time of yourClock
    yourClock.setTime(5, 45, 16);                       //Line 8

    cout << "Line 9: After setting, yourClock: ";       //Line 9
    yourClock.printTime(); //print the time of yourClock  Line 10
    cout << endl;                                       //Line 11

       //compare myClock and yourClock
    if (myClock.equalTime(yourClock))                   //Line 12
        cout << "Line 13: Both times are equal."
             << endl;                                   //Line 13
    else                                                //Line 14
        cout << "Line 15: The two times are not equal."
             << endl;                                   //Line 15

    cout << "Line 16: Enter the hours, minutes, and "
         << "seconds: ";                                //Line 16
    cin >> hours >> minutes >> seconds;                 //Line 17
    cout << endl;                                       //Line 18

       //set the time of myClock using the value of the
       //variables hours, minutes, and seconds
    myClock.setTime(hours, minutes, seconds);           //Line 19

    cout << "Line 20: New myClock: ";                   //Line 20
    myClock.printTime();    //print the time of myClock //Line 21
    cout << endl;                                       //Line 22

       //increment the time of myClock by one second
    myClock.incrementSeconds();                         //Line 23

    cout << "Line 24: After incrementing myClock by " 
         << "one second, myClock: ";                    //Line 24
    myClock.printTime();    //print the time of myClock //Line 25
    cout << endl;                                       //Line 26

      //retrieve the hours, minutes, and seconds of the 
      //object myClock
    myClock.getTime(hours, minutes, seconds);           //Line 27

      //output the value of hours, minutes, and seconds
    cout << "Line 28: hours = " << hours 
         << ", minutes = " << minutes 
         << ", seconds = " << seconds << endl;          //Line 28

    return 0;
}//end main


void clockType::setTime(int hours, int minutes, int seconds)
{
	if (0 <= hours && hours < 24)
	    hr = hours;
	else 
	    hr = 0;

	if (0 <= minutes && minutes < 60)
	    min = minutes;
	else 
	    min = 0;

	if (0 <= seconds && seconds < 60)
	    sec = seconds;
	else 
	    sec = 0;
}

void clockType::getTime(int& hours, int& minutes, int& seconds) const
{
	hours = hr;
	minutes = min;
	seconds = sec;
}

void clockType::incrementHours()
{
	hr++;
	if(hr > 23)
 	   hr = 0;
}

void clockType::incrementMinutes()
{
	min++;
	if (min > 59)
	{
	    min = 0;
	    incrementHours();
	}
}

void clockType::incrementSeconds()
{
	sec++;

	if (sec > 59)
	{
	    sec = 0;
	    incrementMinutes();
	}
}

void clockType::printTime() const
{
	if (hr < 10)
	    cout << "0";
	cout << hr << ":";

	if (min < 10)
	    cout << "0";
	cout << min << ":";

	if (sec < 10)
	   cout << "0";
	cout << sec;
}

bool clockType::equalTime(const clockType& otherClock) const
{
	return (hr == otherClock.hr 
		    && min == otherClock.min 
		    && sec == otherClock.sec);
}
