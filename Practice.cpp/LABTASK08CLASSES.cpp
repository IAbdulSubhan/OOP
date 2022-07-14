// #include <iostream>       //including my header files
// using namespace std;

// class student               //class defination
// {
// private:                    
//     int admno;             //these are private date mambers
//     char sname[20];
//     float eng;              
//     float math;
//     float science;
//     float total;
//     float ctotal()
//     {
//         return eng + math + science;
//     }
// public:                     //Below data is public data and public member functions
//     void Takedata()         //member function to set data in private data members
// 	{
// 		cout<<"Enter the admission number:: ";        //here we will set admission number
// 		cin>> admno;
// 		cout<<"Enter the student name:: " ;            //here we will get Student name from user
// 		cin>>sname;
// 		cout<< "Enter marks in english,then math and then science:: ";      
//         //here we will set marks in english,then math and then science
// 		cin>>eng>>math>>science;
// 		total=ctotal();
// 	}
//     void Showdata()         //member function to show data in private data members
//     {
//        cout<<"Admission number:: "<<admno<<"\nStudent name:: "<<sname<<"\nEnglish:: "
// 			<<eng<<"\nMath:: "<<math<<"\nScience:: "<<science<<"\nTotal:: "<<total;
//     }
// };              //End of the class defination

// int main()          //start of main function
// {
//     student stu;        //defining class variable 
//     stu.Takedata();     //calling "Takedata()" member function from class
//     stu.Showdata();     //calling "showdata()" member function from class
//     return 0;
// }    //End of main

// //------------------------------------------------------------------------------------------------------------------------------------------
// /*Q No.2: Define a class batsman with the following specifications: Note for user understanding purposes
// you should write comment with each line of code.
// Private members:
// bcode 4 digits code number
// bname 20 characters
// innings, notout, runs integer type
// batavg it is calculated according to the formula â€“
// batavg =runs/(innings-notout)
// calcavg() Function to compute batavg
// Public members:
// readdata() Function to accept value from bcode, name, innings, notout and invoke
// the function calcavg()
// displaydata() Function to display the data members on the screen.*/
#include <iostream>             //including my header files
using namespace std;

class batsman                   //class defination
    {
    private:
        int batcode;               //these are private date mambers
        char batname[20];
        int innings, notout, runs;
        int batavg;
        int calcavg()
        {
            return runs/(innings-notout);
        }
    public:                     //Below data is public data and public member functions
        void readdata()         //member function to set data in private data members
        {
            cout<<"Enter batsman code:: ";       //Here we will get batsman code
            cin>> batcode;
            cout<<"Enter batsman name:: ";         //here we will get batsman name
            cin >> batname;
            cout<<"Enter innings,then notout and then runs:: ";        //here we will get innings,then notout and then runs
            cin>>innings>>notout>>runs;
            batavg=calcavg();               //calling the private mamber function
        }
        void displaydata()
        {
            cout<<"Batsman code:: "<<batcode<<endl<<"Batsman name:: "<<batname<<endl<<"Innings:: "<<innings<<endl
            <<"Not out "<<notout<<endl<<"Runs:: "<<runs<<endl<<"Batting Average:: "<<batavg<<endl;
        }
    };  //end of the class
int main()      //start of main function
{
    batsman man;        //defining class variable 
    man.readdata();     //calling "readdata()" member function from class
    man.displaydata();  //calling "displaydata()" member function from class
    return 0; 
}                        //End of main function