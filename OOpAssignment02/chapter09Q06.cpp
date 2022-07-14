/*6.The history teacher at your school needs help in grading a True/False test.
The students’ IDs and test answers are stored in a file. The first entry in the
file contains answers to the test in the form:
TFFTFFTTTTFFTFTFTFTT
Every other entry in the file is the student ID, followed by a blank, followed
by the student’s responses. For example, the entry:
ABC54301 TFTFTFTT TFTFTFFTTFT
indicates that the student ID is ABC54301 and the answer to question 1 is
True, the answer to question 2 is False, and so on. This student did not
answer question 9. The exam has 20 questions, and the class has more than
150 students. Each correct answer is awarded two points, each wrong answer
gets one point deducted, and no answer gets zero points. Write a program
that processes the test data. The output should be the student’s ID, followed
by the answers, followed by the test score, followed by the test grade.
Assume the following grade scale: 90%–100%, A; 80%–89.99%, B;
70%–79.99%, C; 60%–69.99%, D; and 0%–59.99%, F.*/
#include <iostream>
#include <fstream>
using namespace std;

int correctAns(string answerKey,string studentAnswers)
{
    int S_score=0;
    for (int i = 0; i < 20; i++)  //Changed 22 to 21 here
    {
        if (answerKey[i] == studentAnswers[i])
        {
            S_score += 2;
        }
        else if (studentAnswers[i] == ' ')
        {
            S_score += 0;
        }
        else
        {
            S_score -= 1;
        }
    }
    return S_score;
}
char GradeCalculation(int S_sore)
{
    //int i;
    double score = 0;
    char grade = ' ';
    score = S_sore / 40.0 * 100; //percentage calculation

    if (score >= 90)
        grade = 'A';
    else if (score < 90 && score > 79)
        grade = 'B';
    else if (score <= 79 && score > 69)
        grade = 'C';
    else if (score <= 69 && score > 60)
        grade = 'D';
    else if (score <= 59)
        grade = 'F';

    return grade;
}

int main()
{
    //tasks--student’s ID, the answers, the test score, test grade
    //int correct[101];
    string line;
    string studentID,answers,stuAnswers;  
    ofstream fout; 
    ifstream fin,fin2;
    fin.open("answers.txt");   //Be careful about filename
    if(fin)
    {
        // string answerskey={"TFFTFFTTTTFFTFTFTFTT"};
        fout.open("Students-Test-scores-upgrade.txt");
        getline(fin, answers);  //only first line getting
        fout << "The Answer key is: " << answers << endl ;
        cout<<"The Answer key is: "<< answers << endl ;
        fout<<"StudentID"<<" "<<"studentAnswers"<<"\t"<<"Test-Score"<<"\t"<<"Student-Test-Grade\n";
        cout<<"StudentID"<<" "<<"studentAnswers"<<"\t"<<"Test-Score"<<"\t"<<"Student-Test-Grade\n";
        while(getline(fin, studentID, ' '))//Also displaying on Screen the whole
        {
            fout<<studentID<<" ";
            cout<<studentID<<" ";
            getline(fin, stuAnswers);  //here it will get only student answers
            cout<<stuAnswers<<"\t";
            fout<<stuAnswers<<"\t"; //
            int stuScore = correctAns(answers, stuAnswers); //No of correct Answers
            fout<<stuScore<<"\t\t"; 
            cout<<stuScore<<"\t\t"; 
            char stuGrade=GradeCalculation(stuScore);
            fout<<stuGrade<<"\t"; 
            cout<<stuGrade<<"\t";
            fout<<endl;
            cout<<endl;
        }
    }
    else
    {
        cout<<"Sorry! Something is Wrong your file is not openning check filename.\n";
        cout<<"Be careful about filename\n";
    }
    
    
    return 0;
}

//..............................................................................................
