#include <iostream>
using namespace std;


int main(){
    int jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec,minusdays,totaldays;
    jan = 31;
    feb = 28;
    mar = 31;
    apr = 30;
    may =31;
    jun = 30;
    jul =31;
    aug =31;
    sep = 30;
    oct =31;
    nov = 30;
    dec =31;
    int days = 0;
    int months[12] = {jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
    int date,month,year;
    cout<<"Please Enter date: ";
    cin >> date;
    cout<<"Please Enter month: ";
    cin >> month;
    //Checking Year is leap year or not
    cout<<"Please Enter year: ";
    cin >> year;
    if ((year % 4==0 && year % 100 !=0) ||(year % 400 ==0))
    {
        cout<<"The Given Year IS A Leap Year"<<endl;
        if (month == 1)
        {
            for (int i =0; i<month; i++){
                days = days + months[i];
        }
        }

        else{
                for (int i =0; i<month; i++){
                    days = days + months[i];
                }
                for(int i=1; i<=month; i++){
                    if (i == month){
                        minusdays = months[month] - date;
                    }
                }
                totaldays = days - minusdays;
            cout<<"minusdays: "<<minusdays;
        }
    }    
    else
    {
        cout<<"The Given Year IS Not A Leap Year"<<endl;
    }
    
}