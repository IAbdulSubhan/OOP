/*1. Write a program to print number from 1 to 10. */
//-------------By For Loop--------------------------
#include <iostream>
using namespace std;

// int main(){
//     cout<<"By For Loop"<<endl;
//     for(int i=1; i<=10; i++)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
//-----------By While Loop----------------------------
// int main(){
//     int i=1;
//     cout<<"By While Loop"<<endl;
//     while (i <=10)
//     {
//         cout<<i<<" ";
//         i++;
//     }
//     cout<<endl;

// }
//------------------------------------------------------
/*2. Write a program to calculate the sum of first 10 natural number.*/
// int main(){
//     cout<<"By For Loop"<<endl;
//     int j=0;
//     for(int i=1; i<=10; i++)
//     {
//         j=j+i;
//     }
//     cout<<"sum of first 10 natural number = "<<j<<endl;
//     return 0;
// }
//...............................................................
// int main(){
//     int j=0;
//     int i=1;
//     cout<<"By While Loop"<<endl;
//     while (i <=10)
//     {
//         j=j+i;
//         i++;
//     }
//     cout<<"sum of first 10 natural number = "<<j<<endl;

// }
//----------------------------------------------------------------------
/*3. Write a program to find the factorial value of any number entered through the keyboard. */
// int main(){
//     int num,fact=1;
//     cout<<"Enter Num = ";
//     cin >> num;
//     for(int i=num; i>=1; i--)
//     {
//         fact = fact * i; 
//     }
//     cout<<"factorial of "<<num<<" = "<<fact<<endl;
//     return 0;
// }
// int main(){
//     int fact=1;
//     int num;
//     cout<<"Enter Num = ";
//     cin >> num;
//     while(num >=1)
//     {
//         fact=fact*num;
//         num--;
//     }
//     cout<<"factorial : "<<fact<<endl;
//     return 0;
// }
//-------------------------------------------------------------------
/*Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power
of another.*/
// int main(){
//     int base,pow,power=1;
//     cout<<"Enter base num: ";
//     cin >> base;
//     cout<<"Enter pow num: ";
//     cin >> pow;
//     if (pow == 0)
//     {
//         cout<<"power = 1"<<endl;
//     }
//     else
//     {
//         for(int i=1; i<=pow; i++)
//         {
//             power = power * base;
//         }
//         cout<<"power = "<<power<<endl;
//     }
//     return 0;
// }
//-----------------------------------------------------------------------------------------------
/*Write a program to reveres any given integer number. */
// int main(){
//     int reverse,num,rev=0;
//     cout<<"Enter Your num: ";
//     cin >> num;
//     while (num>0)
//     {
//     reverse = num % 10;
//     num = num / 10;
//     rev = rev*10+reverse;
//     }
//     cout<<rev;
//     cout<<endl;
//     return 0;
// }
//................................................................................................
/*Write a program to sum of digits of given integer number.*/
// #include<iostream>
// using namespace std;

// int main()
// {
// 	int n,t,r,sum=0;
// 	cout<<"Enter any number : ";
// 	cin>>n;
// 	t=n;

// 	while(t>0)
// 	{
// 		r=t%10;
// 		sum+=r;
// 		t=t/10;
// 	}

// 	cout<<"Sum of digits of number "<<n<<" is "<<sum;


// 	return 0;
// }
//------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;

// int main()
// {
// 	int n, sum_p=0, sum_n=0, sum_z=0;
// 	char choice;

// 	do
// 	{
// 		cout<<"Enter number ";
// 		cin>>n;

// 		if(n>0)
// 			sum_p++;
// 		else if(n<0)
// 			sum_n++;
// 		else
// 			sum_z++;

// 		cout<<"Do you want to Continue(y/n)? ";
// 		cin>>choice;

// 	}while(choice=='y' || choice=='Y');


// 	cout<<"Positive Number :"<<sum_p<<"\nNegative Number :"<<sum_n<<"\nZero Number :"<<sum_z;


// 	return 0;
// }
//...................................................................................
// #include<iostream>
// using namespace std;

// int main()
// {
// 	int n, max=0, min=32767;
// 	char choice;

// 	do
// 	{		cout<<"Enter number : ";
// 		cin>>n;

// 		if(n>max)
// 			max=n;
// 		if(n<min)
// 			min=n;

// 		cout<<"Do you want to Continue(y/n)? ";
// 		cin>>choice;

// 	}while(choice=='y' || choice=='Y');


// 	cout<<"Maximum Number :"<<max<<"\nMinimum Number :"<<min;


// 	return 0;
// }

//---------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// #include <cmath>

// int main()
// {
//     int sum,num;
//     cout<<"Armstrong numbers between 1 to 500: ";
//     for(int i=0; i<10; i++){
//         for(int j=0; j<10; j++){
//             for(int k=0; k<10; k++){
//                 num=i*100+j*10+k;
//                 sum=pow(i,3)+pow(j,3)+pow(k,3);
//                 if(num==sum){
//                     cout<<num<<" ";
//                 }
//             }
//         }
//     }
//     cout<<endl;
// 	return 0;
// }


