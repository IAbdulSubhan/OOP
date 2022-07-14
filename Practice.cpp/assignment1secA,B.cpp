//Q 1 --------------------Calculator------------------------------------------------
// #include <iostream>
// using namespace std;

// int main(){
//     float num1,num2;
//     char ch;
//     cout<<"Enter a num: ";
//     cin >> num1;
//     cout<<"Enter a num: ";
//     cin >> num2;
//     cout<<"Enter a character: ";
//     cin >> ch;
//     switch (ch)
//     {
//     case('+'):
//         cout<<num1<<"+"<<num2<<" = "<<num1+num2;
//         break;
//     case('-'):
//         cout<<num1<<"-"<<num2<<" = "<<num1-num2;
//         break;
//     case('*'):
//         cout<<num1<<"*"<<num2<<" = "<<num1*num2;
//         break;
//     case('/'):
//         cout<<num1<<"/"<<num2<<" = "<<num1/num2;
//         break;
    
//     default:
//         cout<<"You have Enter Invalid character.";
//         break;
//     }
//  return 0;    
// }
//-----------------------------------------------------------------------------------------
// Q 2 ------------------Tex apply---------------------------------------------------------
// #include <iostream>
// using namespace std;


// int main(){
//     float salary,deduction;
//     cout<<"Enter Salary: ";
//     cin >> salary;
//     if(salary<10000)
//     {
//         cout<<"Your Salary = "<<salary;
//     }
//     else if(salary>=10000 && salary<20000)
//     {
//         cout<<"Your Salary = "<<salary-1000;
//     }
//     else if(salary>20000)
//     {
//         deduction = salary*0.07;
//         cout<<"Your Salary = "<<salary-deduction;
//     }
//     return 0;
// }
// Q 2 ------------------Even|Odd-----------------------------------------------------------
// #include <iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter Num: ";
//     cin >> num;
//     if(num%2==0)
//     {
//         cout<<num<<" is Even Number."<<endl;
//     }
//     else
//     {
//      cout<<num<<" is Odd Number."<<endl;   
//     }
//     return 0;
// }