/*13. Write a program to calculate students’ average test scores and their grades.
You may assume the following input data:
Johnson 85 83 77 91 76
Aniston 80 90 95 93 48
Cooper 78 81 11 90 73
Gupta 92 83 30 69 87
Blair 23 45 96 38 59
Clark 60 85 45 39 67
Kennedy 77 31 52 74 83
Bronson 93 94 89 77 97
Sunny 79 85 28 93 82
Smith 85 72 49 75 63
Use three arrays: a one-dimensional array to store the students’ names, a
(parallel) two-dimensional array to store the test scores, and a parallel onedimensional array to store grades. Your program must contain at least the
following functions: a function to read and store data into two arrays, a
function to calculate the average test score and grade, and a function to
output the results. Have your program also output the class average.*/
#include <iostream>
using namespace std;

void Data_inputing_averge_grade(string S_names[500],int St_marks[][5],int Average[10],char Grades[10])
{
    for(int i=0;i<10;i++)
    {
    	cout<<"First Enter Student Name And the Enter his marks 5times: \n";
    	int sum=0;
        cin >>S_names[i];
        for(int j=0;j<5;j++)
        {
            cin>>St_marks[i][j];
            sum=sum+St_marks[i][j];
        }
        cout<<"Sum = "<<sum;
        Average[i]=(sum/5);
        if(sum>=450 && sum<500)
        {
        	Grades[i]='A';
		}
		else if(sum>=400 && sum<450)
		{
			Grades[i]='B';
		}
		else if(sum>=350 && sum<400)
		{
			Grades[i]='C';
		}
		else if(sum>=300 && sum<350)
		{
			Grades[i]='D';
		}
		else
		{
			Grades[i]='F';
		}
		cout<<endl;
    }
}
int main()
{   
    //1:a function to read
    //2:store data into two arrays
    //3:function to calculate the average test score and grade
    //4:function to output the results. Have your program also output the class average.
    string names[500];
    int class_ave=0;
    //{"Johnson","Aniston","Cooper","Gupta","Blair","Clark","Kennedy","Bronson","Sunny","Smith"};
    int S_marks[10][5];
    /*{
        {85, 83, 77, 91, 76},
        {80, 90, 95, 93, 48},
        {78, 81, 11, 90, 73},
        {92, 83, 30, 69, 87},
        {23, 45, 96, 38, 59},
        {60, 85, 45, 39, 67},
        {77, 31, 52, 74, 83},
        {93, 94, 89, 77, 97},
        {79, 85, 28, 93, 82},
        {85, 72, 49, 75, 63},
    };*/
    char grades[10];
    int average[10];
    Data_inputing_averge_grade(names,S_marks,average,grades);//Every task in one function
    cout<<"\n\n"<<"StudentNames"<<" "<<"1stmarks"<<" "<<"2ndmarks"<<" "<<"3rdmarks"<<" "<<"4thmarks"<<" "<<"5thmarks"<<" "<<"Average"<<" "<<"Grades\n";
    for(int i=0;i<10;i++)
    {
        cout<<names[i]<<"\t\t";
        for(int j=0;j<5;j++)
        {
            cout<<S_marks[i][j]<<"\t";
        }
        cout<<average[i]<<"\t";
        class_ave=class_ave+average[i];
        cout<<grades[i]<<"\t";
        cout<<endl;
    }
    cout<<"Class Average is "<<class_ave;
    return 0;
}
//-------------------------------------------------------------------------------------------------------------

